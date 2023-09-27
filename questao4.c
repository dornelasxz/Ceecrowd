#include <stdio.h>
#include <stdlib.h>

int main() {
    char nivel;
    double salarioatual, salarionovo;
    
    scanf(" %c", &nivel); 
    scanf("%lf", &salarioatual);

    double aumento;
    if (nivel == 'a') {
        aumento = 5;
    } else if (nivel == 'b') {
        aumento = 7;
    } else if (nivel == 'c') {
        aumento = 8;
    } else {
        aumento = 0; 
    }

    salarionovo = salarioatual + (salarioatual * aumento / 100);

    printf("R$ %.2lf\n", salarionovo);

    return 0;
}