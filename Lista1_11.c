/*
 * **11.** Desenvolva um programa denominado **PILHA1** em linguagem C que implemente as operações
 * de uma pilha (pop, push e imprimir) cujo nó deverá conter nome[30] e idade. O usuário deverá
 * ter a opção de empilhar, desempilhar, mostrar pilha e sair.
 */

#include <stdio.h>
#include <stdlib.h>

void push();
void pop();
void imprimir();

typedef struct apelido_no{
    char nome[30];
    int idade;
    struct apelido_no *proximo;
} no;

no *top = NULL;

int main(){
    int opcao;

    
    do{
        system("cls");
        printf("1. Empilhar\n2. Desempilhar\n3. Imprimir\n4. Sair");
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
    } while(opcao!=4);
    system("pause");
}

void push(){
    no *novo=malloc(sizeof(no));

    printf("Nome: \n");
    scanf("%s", novo->nome);
    printf("Idade: \n\n");
    scanf("%d", &novo->idade);
    
    novo->proximo = top;
    top = novo;
    
    printf("Alocado!");
    system("pause");
}

void pop(){
    no *temp = top;
    
    if(top){
        top = top->proximo;
        free(temp);
        printf("Removido");
    } else{
        printf("Pilha Vazia");
    }

    system("pause");
}

void imprimir(){
    no *temp = top;
    while(temp){
        printf("%s - %d\n", temp->nome, temp->idade);
        temp = temp->proximo;
    }
    system("pause");
}
