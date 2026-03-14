#include<stdio.h>

int main(){
    float Fahrenheit, Celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &Fahrenheit);

    Celsius = (Fahrenheit - 32) * 5.0 / 9.0;

    printf("A temperatura em Celsius: %.2f\n", Celsius);

    return 0;
}
