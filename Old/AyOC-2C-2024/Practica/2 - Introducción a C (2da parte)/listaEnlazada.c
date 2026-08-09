#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

/* ==========================================
   1. DEFINICIONES DE LA CÁTEDRA (TIPOS Y ENUMS)
   ========================================== */

typedef enum e_type {
    TypeFAT32 = 0,
    TypeEXT4 = 1,
    TypeNTFS = 2
} type_t;

// Estructuras de ejemplo para que compile
typedef struct { int dummy; } fat32_t;

// Funciones "placeholder" (Simulan lo que hace la cátedra)
fat32_t* new_fat32() { 
    printf("Creando original FAT32 en Heap...\n");
    return malloc(sizeof(fat32_t)); 
}

fat32_t* copy_fat32(fat32_t* f) { 
    printf("Copiando archivo FAT32 a nueva memoria...\n");
    return malloc(sizeof(fat32_t)); 
}

void rm_fat32(fat32_t* f) { 
    printf("Liberando memoria de un archivo FAT32...\n");
    free(f); 
}

/* ==========================================
   2. ESTRUCTURAS DE LA LISTA
   ========================================== */

typedef struct node {
    void* data;
    struct node* next;
} node_t;

typedef struct list {
    type_t type;
    uint8_t size;
    node_t* first;
} list_t;

/* ==========================================
   3. IMPLEMENTACIÓN DE LAS FUNCIONES
   ========================================== */

list_t* listNew(type_t t) {
    list_t* l = malloc(sizeof(list_t));
    l->type = t;
    l->size = 0;
    l->first = NULL;
    return l;
}

void listAddFirst(list_t* l, void* data) {
    node_t* n = malloc(sizeof(node_t));
    // IMPORTANTE: Aquí ocurre la copia profunda
    if(l->type == TypeFAT32) {
        n->data = (void*) copy_fat32((fat32_t*) data);
    }
    n->next = l->first;
    l->first = n;
    l->size++;
}

// --- FUNCIÓN listGet ---
void* listGet(list_t* l, uint8_t i) {
    if (i >= l->size) return NULL; // Seguridad extra
    
    node_t* n = l->first;
    for(uint8_t j = 0; j < i; j++) {
        n = n->next;
    }
    return n->data;
}


// --- FUNCIÓN listRemove ---
void* listRemove(list_t* l, uint8_t i) {
    if (i >= l->size) return NULL;

    node_t* tmp = NULL;
    void* data = NULL;

    if(i == 0) {
        data = l->first->data;
        tmp = l->first;
        l->first = l->first->next;
    } else {
        node_t* n = l->first;
        for(uint8_t j = 0; j < i - 1; j++) {
            n = n->next;
        }
        data = n->next->data;
        tmp = n->next;
        n->next = n->next->next; // El "salto" o puenteo
    }

    free(tmp); // Borramos el nodo, pero NO el data
    l->size--;
    return data;
}

void listDelete(list_t* l) {
    node_t* n = l->first;
    while(n) {
        node_t* tmp = n;
        n = n->next;
        if(l->type == TypeFAT32) rm_fat32((fat32_t*) tmp->data);
        free(tmp);
    }
    free(l);
    printf("Lista y copias borradas.\n");
}

/* ==========================================
   4. FUNCIÓN PRINCIPAL (EL MAIN)
   ========================================== */

int main() {
    printf("--- Inicio del programa ---\n");
    
    //  Creamos la cabecera
    list_t* mi_lista = listNew(TypeFAT32);
    
    //  Creamos archivos originales
    fat32_t* f1 = new_fat32(); // f = file
    fat32_t* f2 = new_fat32();
    
    //  Los agregamos (se crean copias internas)
    listAddFirst(mi_lista, f1); // Indice 1 (ahora es el segundo)
    listAddFirst(mi_lista, f2); // Indice 0 (quedó primero)

    printf("La lista tiene %d elementos.\n", mi_lista->size);

    // Probamos listGet
    fat32_t* recuperado = (fat32_t*) listGet(mi_lista, 0);
    if(recuperado) printf("Get: Se obtuvo el elemento 0 correctamente.\n");

    // Probamos listRemove (sacamos uno de la lista)
    void* extraido = listRemove(mi_lista, 0);
    printf("Remove: Ahora la lista tiene %d elementos.\n", mi_lista->size);
    
    // Como listRemove nos devolvió el data, hay que borrarlo manualmente
    rm_fat32((fat32_t*) extraido);

    // Limpieza final
    listDelete(mi_lista);

    // Limpiamos originales
    rm_fat32(f1);
    rm_fat32(f2);

    printf("Programa finalizado sin leaks - Fin del programa (Memoria limpia)  \n");
    return 0;
}