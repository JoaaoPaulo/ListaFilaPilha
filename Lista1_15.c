/*
 * **15.** Utilizando linguagem C, construa um programa que possua um menu (inserir, remover, imprimir
 * e sair) e contemple uma **FILA** contendo nome e idade. O nome não poderá ter tamanho fixo, ou
 * seja, deverá ser alocado dinamicamente.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct apelido_no{
    char *nome;
    int idade;
    struct apelido_no *proximo;
} no;

void push();
void pop();
void imprimir();

no *inicio=NULL;
no *fim=NULL;

int main(){
    system("cls");
    int opcao;

    do{
        printf("1.Inserir\n2.Remover\n3.Imprimir\n4.Sair");
        scanf("%d", &opcao);
        
        switch(opcao){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                imprimir();
                break;
        }
    } while(opcao != 4);
}

void push(){
    no *novo = malloc(sizeof(no));
    novo->proximo = NULL;

    char buffer[100];

    printf("Nome: ");
    scanf("%s", buffer);
    novo->nome = malloc(strlen(buffer) + 1);
    strcpy(novo->nome, buffer);

    printf("\nIdade: ");
    scanf("%d", &novo->idade);


    if(fim){
        fim->proximo = novo;
        fim = novo;
    } else {
        inicio = novo;
        fim = novo;
    }

    printf("Alocado!");
    system("pause");
}

void pop(){
    if(inicio){
        no *temp = inicio;
        inicio = inicio->proximo;
        
        if(!inicio){
            fim = NULL;
        }

        free(temp->nome);
        free(temp);
    }
    else{
        printf("Já está vazia.");
    }
    system("pause");
}

void imprimir(){
    no *temp = inicio;
    while(temp){
        printf("%s - %d\n", temp->nome, temp->idade);
        temp = temp->proximo;
    }
    system("pause");
}