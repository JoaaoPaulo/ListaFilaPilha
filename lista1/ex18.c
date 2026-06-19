/*
 * **18.** Construa uma **FILA** contendo 20 valores aleatórios entre 1 e 100. Posteriormente:
 * - remova os valores múltiplos de 5;
 * - apresente a fila final.
 */


 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 typedef struct apelido_no{
    int valor;
    struct apelido_no *proximo;
 } no;

 no *inicio = NULL;
 no *fim = NULL;

 int main(){
    srand(time(NULL));

    int i;

    for(i=0; i<20; i++){
        no *novo = malloc(sizeof(no));
        novo->valor = rand() % 100 + 1;
        novo->proximo = NULL;

        if(fim){
            fim->proximo = novo;
            fim = novo;
        }else{
            inicio = novo;
            fim = novo;
        }
    }

    printf("\n20 valores alocados");
    system("pause");
    system("cls");
    printf("Remover múltiplos de 5");
    system("pause");
    system("cls");

    no *temp = inicio;
    no *aux = NULL;

    while(temp){
        if(temp->valor%5==0){
            no *prox = temp->proximo;
            
            if(aux){
                aux->proximo = prox;
            } else {
                inicio = prox;
            }

            if(temp==fim){
                fim = aux;
            }

            free(temp);
            temp = prox;

        } else{
            aux = temp;
            temp = temp->proximo;
        }
    }



    temp = inicio;
    while(temp){
       printf("%d\n", temp->valor);
       temp = temp->proximo;
    }
 }
