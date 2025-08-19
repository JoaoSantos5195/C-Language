#include <stdio.h>
int main(){
    float n, maior, x;
    int escolha;
    
    while (escolha != 0)
    {    
        printf("Quer continuar? (digite 0 para parar)\n");
        scanf("%i", &escolha);
        if(escolha == 0){
            break;
        }

        printf("Digite um número \n");
        scanf("%f", &n);
        maior = n;
        if (n > x){
            x = n;
        }
    }
    printf("O maior número digitado foi o %.2f", x);
}