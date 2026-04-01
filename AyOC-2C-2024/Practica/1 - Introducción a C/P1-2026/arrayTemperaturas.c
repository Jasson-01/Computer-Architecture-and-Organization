#include <stdio.h>

// Prototipo de la función
// Nota: 'int datos[]' es lo mismo que 'int *datos'
void modificar_primer_elemento(int datos[]);

int main(){
    // 1. Declaración e inicialización
    // Reservamos espacio para 4 enteros seguidos en la memoria
    int temperaturas[4] = {10, 20, 30, 40};

    // 2. Acceso por índice y Aritmética básica
    printf("---Antes de la función---\n");
    for (int i=0; i<4; i++){
        // %p muestra la dirección de memoria, %d el valor
        printf("Indice [%d]: valor = %d | Direccion = %p\n", i, temperaturas[i], (void*)&temperaturas[i]); //OJo
    }

    // 3. Llamada a la función
    // Pasamos 'temperaturas', que es la dirección del primer elemento
    modificar_primer_elemento(temperaturas);

    // 4. Verificación del "Efecto Lateral"
    printf("\n--- Despues de la función ---\n");
    printf("temperaturas[0] ahora vale: %d (¡Cambio permanente!)\n", temperaturas[0]);

    return 0;
}

void modificar_primer_elemento(int datos[]) {
    // Al recibir la dirección, entramos a la "casa" original y cambiamos el valor
    datos[0] = 99; 
}