/*
 * **7.** Desenvolva um programa em C que simule uma PILHA com 20 valores
aleatorios entre 10 e 125. Posteriormente, remova todos os elementos
ímpares da pilha e apresente a pilha final ao usuário. Não esqueça de liberar
a pilha toda ao encerrar o programa.
*/


 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

void adicionar_aleatorios();
void remover_impares();
void imprimir();
void limpar();

typedef struct apelido_no {
    int valor;
    struct apelido_no *proximo;
} no;

no *top = NULL;
 
int main(){
    srand(time(NULL));
    int opcao;

    do {
        system("cls");
        printf("1. Adicionar itens aleatorio\n2.Remover itens impares\n3.Imprimir\n4.Sair\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1: 
                adicionar_aleatorios();
                break;
            case 2:
                remover_impares();
                break;
            case 3:
                imprimir();
                break;
            case 4:
                limpar();
                opcao = 5;
                break;
        }

    } while (opcao != 5);
    system("pause");
}


void adicionar_aleatorios(){
    int i;
    for(i=0; i<20; i++){
        no *novo=malloc(sizeof(no));
        novo->valor = rand() % 116 + 10;
        novo->proximo = top;
        top = novo;
    }
}

void remover_impares(){
    no *aux = NULL;
    no *temp=top;
    while(temp){
        if(top->valor % 2 == 1){
            top = top->proximo;
            free(temp);
            temp = top;
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
}

void imprimir(){
    no *temp=top;
    while(temp){
        printf("%d\n", temp->valor);
        temp = temp->proximo;
    }
}

void limpar(){
    no *temp;
    while(top){
        temp = top;
        top = top->proximo;
        free(temp);
    }
}