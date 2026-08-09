#include <stdio.h>
#include <string.h> // Librería estándar para manejar strings

// Prototipo: recibe la dirección del primer caracter
void gritar(char texto[]);

int main() {
    // 1. Declaración e Inicialización
    // "UBA" tiene 3 letras, pero el array reserva 4 bytes (U, B, A, \0)
    char nombre[] = "UBA"; 

    printf("--- Antes de gritar ---\n");
    printf("Contenido: %s\n", nombre);
    
    // Verificamos el tamaño real en memoria vs la longitud del texto
    printf("Longitud (strlen): %lu\n", strlen(nombre)); // Devuelve 3
    printf("Tamaño en memoria (sizeof): %lu\n", sizeof(nombre)); // Devuelve 4

    

    // 2. Llamada a la función
    gritar(nombre);

    // 3. Resultado final
    printf("\n--- Despues de gritar ---\n");
    printf("Contenido: %s (¡Se modificó el original!)\n", nombre);

    return 0;
}

void gritar(char texto[]) {
    // Recorremos el array hasta encontrar el fin de cadena '\0'
    for (int i = 0; texto[i] != '\0'; i++) {
        // Si es una letra minúscula, la pasamos a mayúscula (aritmética simple)
        if (texto[i] >= 'a' && texto[i] <= 'z') {
            texto[i] = texto[i] - 32; // En ASCII, la distancia entre 'a' y 'A' es 32
        }
    }
    // También podemos modificar caracteres específicos
    texto[0] = 'F'; // Cambiamos la 'U' por una 'F' para que diga "FBA"
}