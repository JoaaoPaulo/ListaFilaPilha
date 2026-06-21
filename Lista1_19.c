/*
 * **19.** Utilizando **PILHA**, desenvolva um programa que verifique se uma palavra é palíndromo.
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
    char palavra[100];
    int i, palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for(i=0; i<strlen(palavra); i++){
        push(palavra[i]);
    }

    for(i=0; i<strlen(palavra); i++){
        if(pop() != palavra[i]){
            palindromo = 0;
        }
    }

    if(palindromo){
        printf("\n%s e palindromo!", palavra);
    } else{
        printf("\n%s nao e palindromo.", palavra);
    }

    system("pause");
}
