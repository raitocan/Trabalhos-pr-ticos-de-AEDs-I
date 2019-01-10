#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//Estrutura com Dados para Realizar a Saída de Dados com a Melhor Rota
typedef struct{
  int NumCidades;
  int mat1;
  int mat2;
  int mat3;
  int PontoDePartida;
  clock_t t0, tf;
  double tempo_gasto;
}TipoCaixeiro;

//Função para encontrar o ponto de partida com base na matrícula dos integrantes
//do grupo
void Partida(TipoCaixeiro *Caixeiro, char *mat1, char *mat2, char *mat3);

//Funções para fazer a recursividade da permutação
//Nessas Funções Realizamos a Soma dos dados de Cada Permutação e encontramos o menor
//valor de distancia e armazenar em um vetor
void Troca(int vetor[], int i, int j);
void Permuta(int vetor[], int inf, int sup, TipoCaixeiro Caixeiro, int cidades, int M[cidades][cidades], int *menor, int menorpermuta[cidades]);

//Função de Impressão dos Resultados
void Imprime(TipoCaixeiro Caixeiro, char *mat1, char *mat2, char *mat3, int cidades, int tam, int S[], int M[cidades][cidades]);
