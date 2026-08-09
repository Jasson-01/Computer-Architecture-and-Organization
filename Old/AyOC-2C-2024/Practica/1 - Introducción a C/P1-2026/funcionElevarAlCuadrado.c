#include <stdio.h>

// 1. PROTOTIPO (La declaración)
// Le avisamos al compilador que existe una función llamada 'elevar_al_cuadrado'
// que recibe un entero y devuelve un entero.
int elevar_al_cuadrado(int numero);

int main() {
    int mi_numero = 5;
    int resultado;

    printf("Valor original antes de la funcion: %d\n", mi_numero);

    // 2. LLAMADA A LA FUNCIÓN
    // Pasamos 'mi_numero'. C hace una COPIA del valor 5.
    resultado = elevar_al_cuadrado(mi_numero);

    printf("El cuadrado es: %d\n", resultado);
    
    // Verificamos si el original cambió (Paso por valor)
    printf("Valor original despues de la funcion: %d\n", mi_numero);

    return 0;
}

// 3. DEFINICIÓN (El cuerpo de la función)
int elevar_al_cuadrado(int n) {
    int calculo;
    
    calculo = n * n;
    
    // Modificamos 'n' para probar el paso por valor
    n = 0; 
    
    return calculo; // Enviamos el resultado de vuelta al main
}



/*
A. El "Stack Frame" (Marco de Pila)
Cuando el main llama a elevar_al_cuadrado, el procesador reserva un pedacito de memoria nuevo en el Stack.

En ese pedacito vive la variable n y la variable calculo.

Cuando la función llega al return, ese pedacito de memoria se destruye.
Por eso, cuando volvimos al main, mi_numero seguía valiendo 5 aunque adentro de la función pusimos n = 0. ¡La copia murió, el original sobrevivió!
*/

/*
C. ¿Por qué usamos Prototipos?
Como el compilador de C lee de arriba hacia abajo, si no ponés el prototipo en la línea 5, cuando llegue al main y vea elevar_al_cuadrado, va a decir: "No sé qué es esto, nunca lo vi". El prototipo es como el "tráiler" de una película; le dice al compilador de qué trata la función antes de verla completa.
*/