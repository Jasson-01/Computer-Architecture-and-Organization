#include <stdio.h>

int main(){
    
    int a = 5;
    int b = 3;
    int c = 2;
    int d = 1;

    // Operaciones aritméticas: respeta la prioridad de *, / y % sobre +.
    int op = a + b * c / d;
    int resto = a % b;

    // Operadores relacionales: comparan valores y devuelven 0 (falso) o 1 (verdadero).
    int comp = a == b;
    int comp2 = a != b;

    // Operadores bit a bit: trabajan directamente con los bits de los enteros.
    int bin1 = a & b;
    int bin2 = a | b;
    int neg = ~a;

    // Operadores lógicos: evalúan si las expresiones son falsas o verdaderas.
    int YLogico = a && b;
    int OLogico = a || b;

    // Desplazamientos: mueven los bits una posición a izquierda o derecha.
    int bin3 = a << 1;
    int bin4 = a >> 1;

    // Asignación compuesta: opera y guarda el nuevo valor en a.
    int asign1 = a += b; 
    int asign2 = a -= b;
    int asign3 = a *= b;
    int asign4 = a /= b;
    int asign5 = a %= b;

    printf("Variables finales: a=%d, b=%d, c=%d, d=%d (esperado: 2, 3, 2, 1, por las asignaciones sucesivas)\n", a, b, c, d);
    printf("Operadores aritmeticos: %d, %d (esperado: 11 y 2, por 5 + 3 * 2 / 1 y 5 %% 3)\n", op, resto);
    printf("Operadores relacionales: %d, %d (esperado: 0 y 1, porque 5 no es igual a 3, pero si es distinto)\n", comp, comp2);
    printf("Operadores bit a bit: %d, %d, %d (esperado: 1, 7 y -6, por &, | y ~ aplicados a 5 y 3)\n", bin1, bin2, neg);
    printf("Operadores logicos: %d, %d (esperado: 1 y 1, porque ambos valores son verdaderos)\n", YLogico, OLogico);
    printf("Desplazamientos: %d, %d (esperado: 10 y 2, porque desplazar equivale a multiplicar o dividir por 2)\n", bin3, bin4);
    printf("Asignacion compuesta: %d, %d, %d, %d, %d (esperado: 8, 5, 15, 5 y 2, porque a se actualiza en cada operacion)\n", asign1, asign2, asign3, asign4, asign5);

    
    return 0;
}