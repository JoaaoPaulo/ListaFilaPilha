# Lista, Fila e Pilha — Estruturas de Dados em C

Respostas das listas 1 e 2 de exercícios de **Estruturas de Dados** em **linguagem C**: pilhas, filas e listas encadeadas (simples, duplas e circulares), com alocação dinâmica de memória.

Os arquivos `.c` são programas ou trechos de código; os `.txt` são respostas teóricas, testes de mesa e questões de múltipla escolha.

## Como rodar

Pré-requisito: um compilador C (GCC, Clang ou MinGW no Windows).

```bash
gcc Lista1_07.c -o lista1_07
./lista1_07
```

Os arquivos que só apresentam a estrutura de um nó (`Lista1_03.c`, `Lista1_09.c` e `Lista2_02.c`) não têm `main` e não são programas executáveis.

## Lista 1 — Pilhas e filas

| Nº | Arquivo | Exercício |
| --- | --- | --- |
| 1 | `Lista1_01.txt` | Exemplos práticos de pilha no dia a dia da computação |
| 2 | `Lista1_02.txt` | Como funcionam inserção e remoção em pilha e fila |
| 3 | `Lista1_03.c` | Estrutura mínima de um nó de fila |
| 4 | `Lista1_04.txt` | Tipo do ponteiro de topo de uma pilha |
| 5 | `Lista1_05.txt` | Operações possíveis em uma pilha |
| 6 | `Lista1_06.txt` | O que acontece ao atribuir `NULL` ao topo da pilha |
| 7 | `Lista1_07.c` | Pilha com 20 valores aleatórios (10 a 125), removendo os ímpares |
| 8 | `Lista1_08.c` | O mesmo do exercício 7 usando fila |
| 9 | `Lista1_09.c` | Estrutura mínima de um nó de pilha |
| 10 | `Lista1_10.c` | Fila com nome e idade de 10 pessoas, dividida em outras duas filas |
| 11 | `Lista1_11.c` | PILHA1: menu com push, pop e imprimir (nome e idade) |
| 12 | `Lista1_12.c` | Pilha de 15 valores não repetidos dividida em pilhas de pares e ímpares |
| 13 | `Lista1_13.txt` | Teste de mesa sobre uma pilha com quatro valores |
| 14 | `Lista1_14.c` | Função que conta elementos maiores que 50 na pilha |
| 15 | `Lista1_15.c` | Fila com menu e nome alocado dinamicamente |
| 16 | `Lista1_16.c` | Pilha com 10 valores aleatórios não repetidos |
| 17 | `Lista1_17.txt` | Conteúdo final de uma pilha após uma sequência de push/pop |
| 18 | `Lista1_18.c` | Fila com 20 valores aleatórios, removendo os múltiplos de 5 |
| 19 | `Lista1_19.c` | Verificação de palíndromo usando pilha |
| 20 | `Lista1_20.c` | Verificação de parênteses, colchetes e chaves balanceados em uma expressão |

## Lista 2 — Listas encadeadas, filas e pilhas

| Nº | Arquivo | Exercício |
| --- | --- | --- |
| 1 | `Lista2_01.txt` | Saída de um programa com lista encadeada (teste de mesa) |
| 2 | `Lista2_02.c` | Estrutura mínima do nó de uma lista circular |
| 3 | `Lista2_03.c` | Função `sair()` que libera toda a memória alocada |
| 4 | `Lista2_04.txt` | Lógica de uma função de busca sequencial |
| 5 | `Lista2_05.txt` | Remoção de um nó em lista simplesmente encadeada |
| 6 | `Lista2_06.txt` | Características de listas circulares e um exemplo do dia a dia |
| 7 | `Lista2_07.txt` | Representação gráfica da estrutura após a execução de um código |
| 8–19 | `Lista2_08.txt` a `Lista2_19.txt` | Questões de múltipla escolha sobre pilhas, filas, filas circulares e listas simples, duplas e circulares |
| 20 | `Lista2_20.c` | Integração de lista, fila e pilha: sorteio e retirada de pizzas da formatura |
