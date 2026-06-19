/*
 * **16.** Construa um programa em linguagem C que implemente uma **PILHA** através de 10 elementos
 * (entre 10 e 100) gerados randomicamente (não repetidos). Posteriormente, apresente o conteúdo
 * da pilha.
 */
 

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 typedef struct apelido_no{
    int valor;
    struct apelido_no *proximo;
 } no;

 no *top = NULL;

 int main(){
    srand(time(NULL));

    int i, repetido;
    
    for(i=0; i<10; i++){
        no *novo = malloc(sizeof(no));
        do{
            repetido = 0;
            novo->valor = rand() % 91 + 10;
            
            no *aux = top;
            while(aux){
                if(aux->valor == novo->valor){
                    repetido = 1;
                }
                aux = aux->proximo;
            }
        } while(repetido == 1);
        
        novo->proximo = top;
        top = novo;
    }
    printf("Alocados!");
    system("pause");
    system("cls");

    no *temp = top;
    while(temp){
        printf("%d\n", temp->valor);
        temp= temp->proximo;
    }
 }