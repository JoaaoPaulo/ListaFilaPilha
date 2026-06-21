/*
 * **20.** Desenvolva um programa que leia uma expressão matemática e utilize **PILHA** para verificar se:
 *
 *         parênteses;
 *         colchetes;
 *         chaves;
 *
 * estão balanceados.
 *
 * Exemplo:
 *
 *     ( A + B ) * { C - D }
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct apelido_no{
    char dado;
    struct apelido_no *proximo;
} no;

no *top = NULL;

void push(char c){
    no *novo = malloc(sizeof(no));
    novo->dado = c;
    novo->proximo = top;
    top = novo;
}

char pop(){
    no *temp = top;
    char c = temp->dado;
    top = top->proximo;
    free(temp);
    return c;
}

int main(){
    char expressao[100];
    int i, balanceado = 1;
    char c, abertura;

    printf("Digite a expressao: ");
    scanf(" %[^\n]", expressao);

    for(i=0; i<strlen(expressao); i++){
        c = expressao[i];

        if(c=='(' || c=='[' || c=='{'){
            push(c);
        }
        else if(c==')' || c==']' || c=='}'){
            if(top == NULL){
                balanceado = 0;
                break;
            }

            abertura = pop();

            if((c==')' && abertura!='(') || (c==']' && abertura!='[') || (c=='}' && abertura!='{')){
                balanceado = 0;
                break;
            }
        }
    }

    if(top != NULL){
        balanceado = 0;
    }

    if(balanceado){
        printf("\nExpressao balanceada!");
    } else{
        printf("\nExpressao NAO balanceada.");
    }

    system("pause");
}
