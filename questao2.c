#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;

    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d eh par\n", numero);
    } else {
        printf("%d eh impar\n", numero);
    }

    int somaDigitos(int numero){ 
        int soma = 0;
        while (numero > 0) {
        soma += numero % 10;
        numero /= 10;
        }
        return soma;}
    
    int soma = somaDigitos(numero);
    printf("A soma dos algarismos de %d eh %d\n", numero, soma);

    return 0;
}