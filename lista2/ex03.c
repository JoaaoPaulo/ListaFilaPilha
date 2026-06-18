/*
 * **3)** Analise o código abaixo e implemente uma função chamada **sair()** que seja responsável por
 * liberar corretamente toda a memória alocada dinamicamente antes da finalização do programa.
 *
 * 1  #include <stdlib.h>
 * 2  #include <stdio.h>
 * 3
 * 4  typedef struct apelido_no{
 * 5    int dado;
 * 6    struct apelido_no *proximo;
 * 7  }no;
 * 8  no *top=NULL;
 * 9  //--------------------------------
 * 10 int entrada_dados(){
 * 11   int valor;
 * 12   printf("\nValor a empilhar: ");
 * 13   scanf("%d",&valor);
 * 14   return valor;
 * 15 }
 * 16 //--------------------------------
 * 17 void push(int item){
 * 18   no *novo=malloc(sizeof(no));
 * 19   //verificar se ha memoria
 * 20   novo->dado=item;
 * 21   novo->proximo=top;
 * 22   top=novo;
 * 23   system("pause");
 * 24 }
 * 25 //--------------------------------
 * 26 void pop(){
 * 27   if (top==NULL)
 * 28     printf("A pilha esta vazia\n");
 * 29   else{
 * 30     no *temp;
 * 31     temp=top;
 * 32     top=top->proximo;
 * 33     free(temp);
 * 34   }
 * 35   system("pause");
 * 36 }
 * 37 //--------------------------------
 * 38 int main(){
 * 39   int n,opcao;
 * 40   do{
 * 41     system("cls");
 * 42     printf("\nMenu\n1. Empilha");
 * 43     printf("\n2. Desempilha\n3. Sair")
 * 44     printf("\nOpcao (0-3):");
 * 45     scanf("%d",&opcao);
 * 46     switch (opcao){
 * 47       case 1:
 * 48         n=entrada_dados();
 * 49         push(n); //empilhar
 * 50         break;
 * 51       case 2:
 * 52         pop(); //desempilhar
 * 53         break;
 * 54       case 3:
 * 55         //sair();
 * 56         break;
 * 57     }
 * 58   }while (opcao!=3);
 * 59   system("pause");
 * 60   return 0;}
 */
