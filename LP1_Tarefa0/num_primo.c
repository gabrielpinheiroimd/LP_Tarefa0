#include <stdio.h>

int main() {

    int n, i, primo = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if(n <= 1) {
        primo = 0;
    }

    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            primo = 0;
            break;
        }
    }

    if(primo == 1) {
        printf("O numero eh primo\n");
    } else {
        printf("O numero nao eh primo\n");
    }

    return 0;
}
