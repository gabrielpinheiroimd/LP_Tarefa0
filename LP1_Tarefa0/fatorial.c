#include <stdio.h>

int main() {

    int n, i;
    long long fatorial = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fatorial = fatorial * i;
    }

    printf("Fatorial de %d = %lld\n", n, fatorial);

    return 0;
}
