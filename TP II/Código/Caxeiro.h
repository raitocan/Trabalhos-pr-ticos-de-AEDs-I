//
// Autores: Estela Miranda, João Marcos
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

//Estrutura para Definição dos Dados utilizados para calculo de menor de Distancia
typedef struct {
    int matricula1, matricula2, matricula3;
    int Ponto_Partida ;
    clock_t to, tf;
    double tempo_gasto;
    int MenorDistancia;
    int Menor[];
}TipoCaxeiro;

//Funções para Calculo da Permutação e Menor Distancia
int PontoDePartida(TipoCaxeiro *Caxeiro, char *mat1, char *mat2, char *mat3, int N);
void Imprime(TipoCaxeiro Caxeiro, char *mat1, char *mat2, char *mat3, int N, int M[N][N], int S[], int tam, int cont);
void troca(int vetor[], int i, int j);
void permuta(int vetor[], int inf, int sup, TipoCaxeiro *Caxeiro, int n, int M[n][n]);
void Menor(TipoCaxeiro *Caxeiro, int S[], int tam, int soma);