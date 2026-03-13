#include <stdio.h>

int main() {

    int numeros[5];
    int i, soma = 0;

    for(i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros[i]);
    }

    for(i = 0; i < 5; i++) {
        soma = soma + numeros[i];
    }

    printf("Soma total = %d\n", soma);

    return 0;
}
