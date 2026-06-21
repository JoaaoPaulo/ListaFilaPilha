/*
 * **8.** Com base no exercício anterior, faça o mesmo para uma **FILA**.
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

typedef struct apelido_no {
    int valor;
    struct apelido_no *proximo;
} no;

no *inicio = NULL;
no * fim = NULL;

int main(){
    srand(time(NULL));
    int i;
    no *temp;
    no *aux;

    for(i=0; i<20; i++){
        no *novo=malloc(sizeof(no));
        novo->valor= rand() % 116 + 10;
        novo->proximo = NULL;

        if(fim){
            fim->proximo = novo;
            fim = novo;
        }
        else{
            fim = novo;
            inicio = novo;
        }
    }

    temp = inicio;
    while (temp){
        if(inicio->valor % 2 == 1){
            temp = inicio;
            inicio = inicio->proximo;
            free(temp);
            temp = inicio;
        }
        else if(temp->valor % 2 == 1){
            aux->proximo = temp->proximo;
            free(temp);
            temp=aux->proximo;
        }
        else{
            aux = temp;
            temp = temp->proximo;
        }
    }

    temp = inicio;
    while(inicio){
        printf("%d\n", temp->valor);
        inicio=temp->proximo;
        free(temp);
        temp=inicio; //fila destrutiva, só dá pra imprimir uma vez
x   }
}

