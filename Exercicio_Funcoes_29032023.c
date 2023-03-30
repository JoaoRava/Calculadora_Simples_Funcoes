/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

float SOMA(float a, int b){
    float result;
    result = a + b;
    return result;
}
float SUBTRAI(float a, int b){
    float result;
    result = a - b;
    return result;
}
float MULTIPLICA(float a, int b){
    float result;
    result = a * b;
    return result;
}
float DIVIDE(float a, int b){
    float result;
    result = a / b;
    return result;
}

int main()
{
    float a;
    int b;
    float s, i, j, k;
    printf("\nDigite o primeiro valor:");
    scanf("%f", &a);
    printf("\nDigite o segundo valor:");
    scanf("%d", &b);
    s = SOMA(a, b);
    i = SUBTRAI(a, b);
    j = MULTIPLICA(a, b);
    k = DIVIDE(a, b);
    printf("\n\nA soma de %f + %i é %f\n", a, b, s);
    printf("A subitração de %f + %i é %f\n", a, b, i);
    printf("A multiplicação de %f + %i é %f\n", a, b, j);
    printf("A divisão de %f + %i é %f\n", a, b, k);
    return 0;
}
