#include <stdio.h> 
#include <stdlib.h>

#include "EstruturaVetores.h"

int menu();



int menu(){
    int op;
    printf("Digite as opção desejada\n");
    printf("0 - Sair\n");
    printf("1 - Inserir\n");
    printf("2 - Excluir\n");
    printf("3 - Listar\n");
    printf("4 - \n");
    printf("5 - \n");
    scanf("%d", &op);
    return op;
}

int main(){
    
    int op;
    int sair = 0;
    int ret;
    while (!sair){
        op = menu();
        switch (op){
            case 0:{
                sair =1;
                break;
            }
            case 1:{ //inserir
                //TODO
                ret = inserirNumeroEmEstrutura(25, 5);
                if (ret == SUCESSO){
                	printf("Inserido com sucesso");
                }else if (ret == SEM_ESPACO){
                	printf("Sem Espaço");
                }else if (ret == SEM_ESTRUTURA_AUXILIAR){
                	printf("Sem estrutura Auxiliar");	
                }
                break;
            }

            case 2:{ //excluir
                //TODO
                break;
            }
            default:{
                printf("opcao inválida\n");
            }

            
        }
        
        
    }
    
    return 0;
    
}
