# Trabalhos da Faculdade


Este projeto é uma implementação de um quebra-cabeça chamado Torre de Hanói, será feito em C e utilizando a estrutura de dados pilha para gerenciar os discos.


**Indíce:**
1. Descrição
2. Pré-Requisitos
3. Instalação
4. Uso
5. Estrutura do código
6. Exemplo de Saída


## Descrição


A Torre de Hanói é um quebra-cabeça matemático que consiste em três Torres/Colunas e um número de discos com tamanhos diferentes que podem ser empilhados em qualquer Torre/Coluna.

O quebra-cabeça começa com os discos em uma torre, ordenados do maior (na base) para o menor (no topo). O objetivo do quebra-cabeça é mover toda a pilha para outra torre, obedecendo às seguintes regras:

1.	Apenas um disco pode ser movido por vez.
2.	Cada movimento consiste em pegar o disco do topo de uma das pilhas e colocá-lo no topo de outra pilha.
3.	Nenhum disco pode ser colocado sobre um disco menor.


## Pré-Requisitos


•	Um compilador C (como GCC)
•	Exemplo de plataforma para implementação do código: Visual Studio Code
•	Usar as seguintes extensões: C/C++ Compile Run extension; Code Runner.


## Instalação


1.	Repositório:
https://github.com/Kelvin963/Torre-de-Hanoi/tree/main/TORRE_HANOI

2.	Compile o código:

Abra um terminal e escreva:
cd TORRE_HANOI
gcc hanoi.c hanoi.h main.c -o compilar1


## Uso


Para executar o programa (após fazer os passos de instalação para compilar o código), use o comando:
.\compilar1

Você será solicitado a inserir o número de discos. O programa exibirá a sequência de movimentos necessária para resolver o quebra-cabeça.

Exemplo: Digite A B, o disco será movimentado de A para B e etc.


## Estrutura do código


**•	hanoi.c:** A estrutura principal que contém a implementação do algoritmo da Torre de Hanói utilizando pilhas.

**•	hanoi.h:** A estrutura define a constante MAX_DISCOS (10), a estrutura Pilha para representar as torres com um array de discos e o topo, e declara funções para inicialização, manipulação e exibição das torres e discos no jogo da Torre de Hanói.

**•	main.c:** A estutura inicializa as torres do jogo da Torre de Hanói, permite ao usuário definir o número de discos, e manipula as interações do usuário para mover discos entre as torres ou reiniciar o jogo, exibindo o estado atual das torres após cada movimento.


## Funções Principais


•	void exibirTorres(Pilha *a, Pilha *b, Pilha *c, int n);
•	void moverDisco(Pilha *origem, Pilha *destino, char nomeOrigem, char nomeDestino);


## Exemplo de Saída

Torres:

      _|_       |        |
     __|__      |        |
    ___|___     |        |

       A        B        C

Digite o movimento (ex: A B) ou 'R' para reiniciar: