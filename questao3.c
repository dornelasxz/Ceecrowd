#include <stdio.h>
#include <stdlib.h>

int main(){
    int senha;
    int login;
  
    scanf("%d", &senha);
    printf("senha cadastrada: %d\n", senha);
    
    scanf("%d",&login);
    
    if (senha == login)
    {
        printf("senha valida!\n");}

    for (; senha != login;)
    {
        printf ("senha invalida!\n");
        scanf("%d", &login);

        if (senha == login){
        printf("senha valida!\n");
        }

    }
}