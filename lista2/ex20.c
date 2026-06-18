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
