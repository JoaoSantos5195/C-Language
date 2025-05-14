#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()

{
int i = 0;
int x = 0; //x = número de itens
//ponteiro para apontar para o local da memória
char *nomeItem;
char *descricao;
//alocaoção de memória(pois não sabemos o tamanho da string)
nomeItem = malloc(120*sizeof(char)); //120 tamanho máximo
descricao = malloc(220*sizeof(char));//sizeof (char) = 1 byte = 120 bytes
int quantidade[x];
int escolha;
escolha = 0;

do
{
    
    printf("--MENU DO SISTEMA-- \n");
    printf("[1] Cadastrar item \n");
    printf("[2] Listar itens \n");
    printf("[3] Excluir itens \n");
    printf("[4] Sair \n");
    scanf("%i", &escolha);
    
    switch(escolha){
        case 1:                
            x++;
            
            printf("Qual o item quer Cadastrar? \n");
            fgets(nomeItem, 120, stdin);     // Permite espaços

            
            printf("Qual a quantidade? \n");
            scanf("%i", &quantidade[i]);
            
            printf("Descricao \n");
            fgets(descricao, 220, stdin);
            i++;
            
            break;
        case 2:
           //printando o itens dos arrays em loop     
            for (i = 0; i < x; i++) //enquanto menor q x(número de itens)
            {
                printf ("Nome: %s \n", nomeItem);
                printf ("Quantidade: %i \n", quantidade[i]);
                printf ("Descricao: %s \n", descricao);
            }                               
            break;
        case 3:
            printf("Indisponível no momento \n");
            break;
        case 4:
            printf("Saindo \n");
            break;
        default:
            printf("Escolha incorreta \n");
            break;
    }
} while (escolha != 4);

free(nomeItem); // Libera a memória após o uso
free(descricao);
return 0;
}
