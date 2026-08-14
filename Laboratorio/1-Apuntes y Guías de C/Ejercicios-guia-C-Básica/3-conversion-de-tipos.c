#include <stdio.h>

int main(){
    float num1 = 0.1;
    double num2 = 0.1;

    int castFloat = (int) num1;
    int castDouble = (int) num2;

    printf("Versión float: %f \n",num1);
    printf("Versión double: %lf \n",num2);

    printf("Cast float a int: %d \n", castFloat);
    printf("Cast double a int: %d \n", castDouble);

    return 0;
}