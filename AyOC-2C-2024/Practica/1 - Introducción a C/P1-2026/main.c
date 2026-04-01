#include <stdio.h>

// DECLARACIÓN: "Aviso que nivel_energia existe en otro lado"
extern int nivel_energia; 

// También avisamos que existe la función
void mostrar_estado();

int main() {
    printf("Leyendo desde main: %d\n", nivel_energia);

    // MODIFICACIÓN: Alteramos la variable global desde aquí
    nivel_energia = 50;

    mostrar_estado(); // Verás que el cambio se refleja allá también
    return 0;
}