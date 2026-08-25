// Realizar un programa que calcule el factorial de un número entero positivo. Para esto,
// usar una función que reciba el número y devuelva el resultado.
// El factorial de un número entero positivo n es el producto de todos los números
// enteros positivos menores o iguales a n. Por ejemplo, el factorial de 5 es 5! =
// 5 × 4 × 3 × 2 × 1 = 120.
// El factorial de 0 es 1.
// El factorial de un número negativo no está definido.
// Se puede realizar utilizando recursión o iteración.

#include <stdio.h>

int factorialDe(int n);


int main(){
     
    int n;

    printf("Ingrese un numero: \n");
    scanf("%d", &n); // Se usa para leer un numero del teclado, scanf usa & para saber la direccion de memoria exacta para ir a escribir ahi el numero que tipeo el usuario.
    
    if (n < 0) {
      printf("El factorial de un numero negativo no esta definido.\n");
      return 1;
    }

    int res = factorialDe(n);

    printf("El factorial de %d, es: %d\n", n, res);

  
    return 0;
}

int factorialDe(int n) {
  if(n <= 0){
      return 1;
    } else {
      return n * factorialDe(n-1);  
    }
}