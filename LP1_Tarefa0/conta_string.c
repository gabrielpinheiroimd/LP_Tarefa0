#include <stdio.h>

int main() {

    char texto[100];
    int i = 0, contador = 0;

    printf("Digite uma frase: ");
    fgets(texto, 100, stdin);

    while(texto[i] != '\0') {
        contador++;
        i++;
    }

    printf("Quantidade de caracteres: %d\n", contador - 1);

    return 0;
}

