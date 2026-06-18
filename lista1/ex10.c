/*
 * **10.**Construma um progama em linguagem C que implemente uma FILA
contendo o nome e idade de 10 pessoas fornecidas pelo usuário.
Posteriormente, monte mais duas filas (FILA2 e FILA3) onde a primeira
deverá conter as pessoas até 30 anos e a segunda acima de 30. Apresente
as duas novas filas ao usuário e posteriormente encerre o programa,
liberando a memória das três filas. Obs. A fila inicial deverá ser esvaziada ao
final do processo.
 */


 #include <stdio.h>
 #include <stdlib.h>

 typedef struct apelido_no{
    char nome[20];
    int idade;
    struct apelido_no *proximo;
 } no;

no *inicio1 = NULL;
no *fim1 = NULL;
no *inicio2 = NULL;
no *fim2 = NULL;
no *inicio3 = NULL;
no *fim3 = NULL;

 int main(){
    int i;
    no *temp;

    for(i=0; i<10; i++){
        no *novo=malloc(sizeof(no));
        printf("\nNome pessoa %d: ", i+1);
        scanf("%c", novo->nome);
        printf("\nIdade pessoa %d: ", i+1);
        scanf("%d", &novo->idade);
        
        if(fim1){
            fim1->proximo = novo;
            fim1 = novo;
        }
        else{
            inicio1 = novo;
            fim1 = novo;
        }

        system("cls");
    }

    printf("Pessoas até 30 para a fila 2 e +30 para a fila 3\n\n");

    temp = inicio1;
    while(temp){
        no *novo=malloc(sizeof(no));

        if(temp->idade <= 30){
            if(fim2){
                fim2->proximo = novo;
                fim2 = novo;
                novo = temp;
            }else{
                inicio2 = novo;
                fim2 = novo;
                novo = temp;
            }
        }
        else{
            if(fim3){
                fim3->proximo = novo;
                fim3 = novo;
                novo = temp;
            }else{
                inicio3 = novo;
                fim3 = novo;
                novo = temp;
            }
        }
        
        inicio1 = inicio1->proximo;
        free(temp);
    }


    temp = inicio2;
    printf("ATÉ 30\n\n");
    while(inicio2){
        printf("%c\n", inicio2->nome);
        printf("%d\n\n", inicio2->idade);
        
        temp = inicio2;
        inicio2 = inicio2->proximo;
        free(temp);
        temp = inicio2;
    }
    
    temp = inicio3;
    printf("ACIMA DE 30\n\n");
    while(inicio3){
        printf("%s\n", inicio3->nome);
        printf("%d\n\n", inicio3->idade);
        
        temp = inicio3;
        inicio3 = inicio3->proximo;
        free(temp);
        temp = inicio3;
    }
 }