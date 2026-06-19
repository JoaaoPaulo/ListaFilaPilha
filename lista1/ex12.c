/*
 * **12.** Construa um programa em linguagem c que monte uma pilha de 15 elementos com valores
 * aleatórios (não repetidos) entre 10 e 100. Posteriormente, monte duas pilhas (pares e ímpares),
 * distribuindo e esfaziando a pilha original.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct apelido_no{
    int valor;
    struct apelido_no *proximo;
} no;

no *top1=NULL;
no *top2=NULL;
no *top3=NULL;

int main(){
    srand(time(NULL));

    printf("Montar pilha de 15 elementos (10-100)");
    system("pause");

    int i;

    for(i=0; i<15; i++){
        no *novo=malloc(sizeof(no));
        int repetido;

        do{
            repetido = 0;
            novo->valor = rand() % 91 + 10;

            no *aux = top1;
            while(aux){
                if(aux->valor == novo->valor){
                    repetido = 1;
                }
                aux = aux->proximo;
            }
        } while(repetido == 1);

        novo->proximo = top1;
        top1 = novo;
    }

    system("cls");
    printf("Lista montada com sucesso!");
    system("pause");

    printf("\n\nDistribuir em pilhas pares e ímpares");
    system("pause");

    no *temp;
    while(top1){
        temp = top1;
        top1 = top1->proximo;
        temp->proximo = NULL;

        if(temp->valor % 2 == 0){
            temp->proximo = top2;
            top2 = temp;
        }
        else{
            temp->proximo = top3;
            top3 = temp; 
        }
    }

    system("cls");
    printf("Pilha dividida!");
    system("pause");
    printf("\n\nImprimir");
    system("pause");
    system("cls");

    printf("PILHA PARES\n\n");
    temp = top2;
    while(temp){
        printf("%d\n", temp->valor);
        temp = temp->proximo;
    }

    printf("\n\n\n\nPILHA IMPARES\n\n");
    temp = top3;
    while(temp){
        printf("%d\n", temp->valor);
        temp = temp->proximo;
    }
}