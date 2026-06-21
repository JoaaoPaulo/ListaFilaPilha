/*
 * **2)** Utilizando linguagem C, apresente apenas a estrutura mínima do nó de uma lista circular.
 */

typedef struct apelido_no{
    int valor;
    struct apelido_no *proximo;
} no;

no *inicio = NULL;
