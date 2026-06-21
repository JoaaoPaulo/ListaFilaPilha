/*
 * **20)** Exercício – Integração de Lista, Fila e Pilha
 *
 * As turmas de Análise e Desenvolvimento de Sistemas (ADS) e Engenharia de Software (ESOFT) da
 * Unicesumar estão realizando uma promoção para arrecadar recursos para a formatura.
 *
 * Para a retirada das pizzas vendidas, foi realizado um sorteio com 10 participantes. Os nomes dos
 * sorteados deverão ser armazenados em uma **LISTA**, que representará o cadastro das pessoas
 * autorizadas a retirar as pizzas.
 *
 * No dia da retirada, os participantes chegarão à pizzaria e serão atendidos por ordem de chegada.
 * Portanto, deverá ser utilizada uma **FILA** para organizar os sorteados que aguardam atendimento.
 *
 * A pizzaria produzirá as pizzas conforme sua disponibilidade. Cada pizza pronta será embalada e
 * colocada sobre as demais, formando uma **PILHA** de pizzas prontas para entrega.
 *
 * **O funcionamento do sistema deverá seguir as seguintes regras:**
 *
 * - Cadastrar os 10 sorteados em uma LISTA.
 * - À medida que os sorteados chegarem à pizzaria, inseri-los na FILA de atendimento.
 * - Conforme as pizzas forem ficando prontas, elas deverão ser EMPILHADAS na PILHA de pizzas prontas.
 * - Quando ocorrer uma entrega:
 *   1. A pessoa que está no início da FILA deverá ser atendida (desenfileiramento);
 *   2. A pizza que estiver no topo da PILHA deverá ser retirada (desempilhamento);
 *   3. Na LISTA de sorteados, a pessoa deverá ser marcada como "Pizza Retirada".
 * - O processo continua até que todas as pizzas tenham sido entregues.
 *
 * **O programa deverá permitir:**
 *
 * - Inserir e visualizar os sorteados da LISTA;
 * - Inserir e visualizar pessoas na FILA de atendimento;
 * - Inserir e visualizar pizzas na PILHA de pizzas prontas;
 * - Realizar a entrega de pizzas, efetuando simultaneamente o desenfileiramento da pessoa e o
 *   desempilhamento da pizza;
 * - Consultar a LISTA de sorteados, identificando quais pessoas já retiraram sua pizza e quais
 *   ainda não retiraram.
 *
 * **Observações**
 *
 * - As estruturas de dados (LISTA, FILA e PILHA) deverão ser implementadas utilizando linguagem C.
 * - Cada aluno deverá definir livremente as structs necessárias, bem como seus atributos, de acordo
 *   com sua interpretação da regra de negócio.
 * - É recomendado que as structs possuam informações suficientes para identificar pessoas, pizzas e
 *   o status de retirada.
 * - A implementação deverá demonstrar claramente o uso correto das operações fundamentais de cada
 *   estrutura de dados:
 *   - Lista: inserção, consulta e atualização;
 *   - Fila: enqueue (enfileirar) e dequeue (desenfileirar);
 *   - Pilha: push (empilhar) e pop (desempilhar).
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sorteado_no{
    char *nome;
    int retirado;
    struct sorteado_no *proximo;
} sorteado;

typedef struct fila_no{
    char *nome;
    struct fila_no *proximo;
} pessoaFila;

typedef struct pilha_no{
    int numero;
    struct pilha_no *proximo;
} pizza;

void cadastrarSorteado();
void imprimirLista();
void enfileirar();
void empilharPizza();
void entregar();
void imprimirFila();
void imprimirPilha();

sorteado *listaInicio = NULL;
pessoaFila *filaInicio = NULL;
pessoaFila *filaFim = NULL;
pizza *pilhaTop = NULL;
int contadorPizza = 1;

int main(){
    int opcao;

    do{
        system("cls");
        printf("1. Cadastrar sorteado na LISTA\n");
        printf("2. Inserir sorteado na FILA de atendimento\n");
        printf("3. Empilhar pizza pronta na PILHA\n");
        printf("4. Imprimir LISTA de sorteados\n");
        printf("5. Imprimir FILA de atendimento\n");
        printf("6. Imprimir PILHA de pizzas\n");
        printf("7. Realizar entrega\n");
        printf("8. Sair\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                cadastrarSorteado();
                break;
            case 2:
                enfileirar();
                break;
            case 3:
                empilharPizza();
                break;
            case 4:
                imprimirLista();
                break;
            case 5:
                imprimirFila();
                break;
            case 6:
                imprimirPilha();
                break;
            case 7:
                entregar();
                break;
        }
    } while(opcao != 8);

    return 0;
}

void cadastrarSorteado(){
    sorteado *novo = malloc(sizeof(sorteado));
    char buffer[100];

    printf("Nome do sorteado: ");
    scanf("%s", buffer);
    novo->nome = malloc(strlen(buffer) + 1);
    strcpy(novo->nome, buffer);
    novo->retirado = 0;
    novo->proximo = NULL;

    if(listaInicio == NULL){
        listaInicio = novo;
    } else{
        sorteado *aux = listaInicio;
        while(aux->proximo)
            aux = aux->proximo;
        aux->proximo = novo;
    }

    printf("Sorteado cadastrado!");
    system("pause");
}

void imprimirLista(){
    sorteado *temp = listaInicio;
    while(temp){
        if(temp->retirado)
            printf("%s - Pizza Retirada\n", temp->nome);
        else
            printf("%s - Aguardando\n", temp->nome);
        temp = temp->proximo;
    }
    system("pause");
}

void enfileirar(){
    pessoaFila *novo = malloc(sizeof(pessoaFila));
    char buffer[100];

    printf("Nome de quem chegou: ");
    scanf("%s", buffer);
    novo->nome = malloc(strlen(buffer) + 1);
    strcpy(novo->nome, buffer);
    novo->proximo = NULL;

    if(filaFim){
        filaFim->proximo = novo;
        filaFim = novo;
    } else{
        filaInicio = novo;
        filaFim = novo;
    }

    printf("Inserido na fila!");
    system("pause");
}

void imprimirFila(){
    pessoaFila *temp = filaInicio;
    while(temp){
        printf("%s\n", temp->nome);
        temp = temp->proximo;
    }
    system("pause");
}

void empilharPizza(){
    pizza *novo = malloc(sizeof(pizza));
    novo->numero = contadorPizza;
    contadorPizza++;
    novo->proximo = pilhaTop;
    pilhaTop = novo;

    printf("Pizza %d empilhada!", novo->numero);
    system("pause");
}

void imprimirPilha(){
    pizza *temp = pilhaTop;
    while(temp){
        printf("Pizza %d\n", temp->numero);
        temp = temp->proximo;
    }
    system("pause");
}

void entregar(){
    if(filaInicio == NULL || pilhaTop == NULL){
        printf("Nao ha pessoa na fila ou pizza na pilha para entregar.");
        system("pause");
        return;
    }

    pessoaFila *pessoa = filaInicio;
    filaInicio = filaInicio->proximo;
    if(filaInicio == NULL)
        filaFim = NULL;

    pizza *pizzaEntregue = pilhaTop;
    pilhaTop = pilhaTop->proximo;

    sorteado *aux = listaInicio;
    while(aux && strcmp(aux->nome, pessoa->nome) != 0)
        aux = aux->proximo;
    if(aux)
        aux->retirado = 1;

    printf("%s recebeu a pizza %d!", pessoa->nome, pizzaEntregue->numero);

    free(pessoa->nome);
    free(pessoa);
    free(pizzaEntregue);
    system("pause");
}
