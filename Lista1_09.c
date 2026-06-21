/*
 * **9.** Utilizando a linguagem c, apresente a estutura mínima de um nó em uma **PILHA**.
 */
 typedef struct apelido{
    int dado;
    struct apelido *proximo;
 } no;

 no *top = NULL;