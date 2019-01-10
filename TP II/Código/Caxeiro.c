//
//Autores: Estela Miranda, João Marcos, Elida
//

#include "Caxeiro.h"

//Função para Transformação de Char em Int para encontrar o Ponto de Partida
int PontoDePartida(TipoCaxeiro *Caxeiro, char *mat1, char *mat2, char *mat3, int N){
    //Encontrar a soma dos digitos de cada matrícula atraves da Tabela ASK
    Caxeiro->matricula1 = (mat1[0] - '0') + (mat1[1] - '0') + (mat1[2] - '0') + (mat1[3] - '0');
    Caxeiro->matricula2 = (mat2[0] - '0') + (mat2[1] - '0') + (mat2[2] - '0') + (mat2[3] - '0');
    Caxeiro->matricula3 = (mat2[0] - '0') + (mat3[1] - '0') + (mat3[2] - '0') + (mat3[3] - '0');

    //Retorno do Ponto de Partida depois da Conversão das matriculas em soma
    Caxeiro->Ponto_Partida = (Caxeiro->matricula1 + Caxeiro->matricula2 + Caxeiro->matricula3)%N;
    return Caxeiro->Ponto_Partida;
}

//Função para Calculo da Permutação atraves de Função Recursiva
void troca(int vetor[], int i, int j) {
    int aux = vetor[i];
    vetor[i] = vetor[j];
    vetor[j] = aux;
}

//Função de Permutação Recursiva
void permuta(int vetor[], int inf, int sup, TipoCaxeiro *Caxeiro, int n, int M[n][n]) {
    int N[n];
    int soma=0;

    if(inf == sup) {
        //Condição de Entrada, para dados com vetor de permutação inicial igual ao ponto de partida
        if(Caxeiro->Ponto_Partida == vetor[0]){
            for(int i = 0; i <=n; i++){
                printf("%d ", vetor[i]);
                N[i] = vetor[i];
            }
            N[n] = Caxeiro->Ponto_Partida;

            //Laço de Repetição para calcular a soma com valores da Matriz
            for(int i=0; i<n-1; i++){
                soma += M[N[i]][N[i+1]];
            }
            //Realizando a última parte da soma, que está "fora" do vetor de permutações
            soma+=M[N[n-1]][N[0]];

            printf("-> %d",soma);
            printf("\n");

            //Condicional para encontrar a menor distancia dentro das permutações
            //if(soma <= Caxeiro->MenorDistancia){
              //  Caxeiro->MenorDistancia = soma;
            //}

            Menor(Caxeiro, N, n, soma);
        }
    } else {
        //Aqui temos o empilhamento da função de permutação para realizar os calculos necessários aprendidos em sala
        for(int i = inf; i <= sup; i++) {
            troca(vetor, inf, i);
            permuta(vetor, inf + 1, sup, Caxeiro, n, M);
            troca(vetor, inf, i); // backtracking
        }
        vetor[sup+1] = Caxeiro->Ponto_Partida;
    }
}

void Menor(TipoCaxeiro *Caxeiro, int S[], int tam, int soma){
    if(soma <= Caxeiro->MenorDistancia){
        Caxeiro->MenorDistancia = soma;

        for(int i=0; i<=tam; i++){
            Caxeiro->Menor[i] = S[i];
        }
    }
}

//Função que retorna a saída dos dados obtidos durante o processo de permutação e procura de menor distancia
void Imprime(TipoCaxeiro Caxeiro, char *mat1, char *mat2, char *mat3, int N, int M[N][N], int S[], int tam, int cont){
    int i, j;

    printf("=========================\n");
    printf("MATRICULA 1: %s\n", mat1);
    printf("MATRICULA 2: %s\n", mat2);
    printf("MATRICULA 3: %s\n", mat3);
    printf("=========================\n");
    printf("CIDADES: %d\n", N);
    printf("=========================\n");
    printf("PONTO DE PARTIDA: %d\n", PontoDePartida(&Caxeiro, mat1, mat2, mat3, N));
    printf("=========================\n");
    printf("MATRIZ DISTÂNCIA\n");
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    printf("=========================\n");
    printf("DISTANCIAS\n");
    printf("=========================\n");
    permuta(S, 0, tam-1, &Caxeiro, N, M);
    printf("=========================\n");
    printf("MENOR DISTANCIA: %d\n", Caxeiro.MenorDistancia);
    printf("=========================\n");
    printf("SEQUENCIA DE DADOS:\n");
    for(i=0; i<N; i++){
        printf("%d ", Caxeiro.Menor[i]);
    }
    printf("%d", Caxeiro.Ponto_Partida);
    printf("\n");

    //Finalização do temporizador de contagem do Tempo de Execução do Codigo
    Caxeiro.tf = clock();
    Caxeiro.tempo_gasto = ((double) (Caxeiro.tf - Caxeiro.to))/CLOCKS_PER_SEC;
    printf("=========================\n");
    printf("TEMPO GASTO: %lfs\n", Caxeiro.tempo_gasto);
    printf("=========================\n");

}