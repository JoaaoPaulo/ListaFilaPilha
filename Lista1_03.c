/*
 * **3.** Utilizando a linguagem c, apresente a estutura mínima de um nó em uma **FILA**.
 */


 typedef struct apelido{
    int dado;
    struct apelido *proximo;
 } no;

 no *inicio = NULL;
 no *fim = NULL;