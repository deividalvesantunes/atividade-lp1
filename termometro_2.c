#include <stdio.h>

int main() {
    int n;
    int fatorial = 1;

    printf("Digite um número que direi sua fatorial: ");

    scanf("%d" , &n);

    for (int i = 1; i<=n; i++) {
        fatorial = fatorial * i;
    }
    printf("O fatorial de %d é %d\n", n , fatorial);

    return 0;
}