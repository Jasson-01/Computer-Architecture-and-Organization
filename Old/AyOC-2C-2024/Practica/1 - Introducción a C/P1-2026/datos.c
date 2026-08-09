#include <stdio.h>

// Definición global (se inicializa una sola vez)
int nivel_energia = 100; 

void mostrar_estado() {
    printf("Energía actual en datos.c: %d\n", nivel_energia);
}