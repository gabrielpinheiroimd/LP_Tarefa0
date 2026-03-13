#include <stdio.h>

int main() {

    float temp, resultado;
    int opcao;

    printf("Escolha a conversao:\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    scanf("%d", &opcao);

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    if(opcao == 1) {
        resultado = (temp * 9/5) + 32;
        printf("Temperatura em Fahrenheit: %.2f\n", resultado);
    }
    else if(opcao == 2) {
        resultado = (temp - 32) * 5/9;
        printf("Temperatura em Celsius: %.2f\n", resultado);
    }
    else {
        printf("Opcao invalida\n");
    }

    return 0;
}
