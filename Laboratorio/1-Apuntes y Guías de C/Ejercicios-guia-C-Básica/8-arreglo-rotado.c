// Realizar un programa que rote un arreglo de números enteros a la izquierda. El arreglo puede estar hardcodeado. Por ejemplo, si el arreglo es [1, 2, 3, 4], el resultado debe ser [2, 3, 4, 1]. Cuando veamos punteros, podremos hacer una función de rotación genérica.

#include <stdio.h>

int main() {
    // Arreglo Hardcodeado
    int arreglo[] = {1,2,3,4};
    int tamano = 4;

    // Guardamos el primer elemento
    int primero = arreglo[0];

    // Desplazamos los elementos hacia la izquierda
    for(int i=0; i<tamano-1; i++){
        arreglo[i] = arreglo[i+1];
    }

    // Colocamos el primer elemento al final
    arreglo[tamano-1] = primero;

    // Imprimir el arreglo resultante
    printf("Arreglo rotado: [");
    for(int i=0; i<tamano; i++){
        printf("%d%s", arreglo[i], (i<tamano-1) ? "," : "");
    }
    printf("]\n");

    return 0;
}