#include "Caixeiro.h"

void Partida(TipoCaixeiro *Caixeiro, char *mat1, char *mat2, char *mat3){
  //Realização da Transformação e Soma de cada Digito de cada matricula do grupo
  Caixeiro->mat1 = (mat1[0] - '0') + (mat1[1] - '0') + (mat1[2] - '0') + (mat1[3] - '0');
  Caixeiro->mat2 = (mat2[0] - '0') + (mat2[1] - '0') + (mat2[2] - '0') + (mat2[3] - '0');
  Caixeiro->mat3 = (mat3[0] - '0') + (mat3[1] - '0') + (mat3[2] - '0') + (mat3[3] - '0');

  //Retorno do ponto de partida
  Caixeiro->PontoDePartida = (Caixeiro->mat1 + Caixeiro->mat2 + Caixeiro->mat3)%Caixeiro->NumCidades;
}

void Troca(int vetor[], int i, int j){
	int aux = vetor[i];
	vetor[i] = vetor[j];
	vetor[j] = aux;
}

void Permuta(int vetor[], int inf, int sup, TipoCaixeiro Caixeiro, int cidades, int M[cidades][cidades], int *menor, int menorpermuta[cidades]){
  int soma=0;

	if(inf == sup){
    //Exibindo apenas a permutação que inicia no ponto de partida definido pelas matrículas
    if(vetor[0] == Caixeiro.PontoDePartida){
      //Impressão do vetor de Permutação
      for(int i = 0; i <= sup+1; i++)
  			printf("%d ", vetor[i]);

        //Fazendo a soma das distancias de cada permutação na matriz de distancia
        for(int i=0; i<cidades; i++){
          soma += M[vetor[i]][vetor[i+1]];
        }
        printf("-> %d\n", soma);

        //Verificando e preenchendo o vetor e variavel com menor distancia
        if(soma <= *menor){
          *menor = soma;

          for(int i=0; i<cidades; i++){
            menorpermuta[i] = vetor[i];
          }
        }
      }
	} else {
		for(int i = inf; i <= sup; i++){
			Troca(vetor, inf, i);
			Permuta(vetor, inf + 1, sup, Caixeiro, cidades, M, menor, menorpermuta);
			Troca(vetor, inf, i); // backtracking
		}
    //Preenchendo a ultima posição do vetor com a cidade ponto de partida para
    //calculo da distancia
    vetor[sup+1] = Caixeiro.PontoDePartida;
	}
}

void Imprime(TipoCaixeiro Caixeiro, char *mat1, char *mat2, char *mat3, int cidades, int tam, int S[], int M[cidades][cidades]){
  int menor = 20000000;
  int menorpermuta[cidades];

  printf("=========================\n");
   printf("MATRICULA 1: %s\n", mat1);
   printf("MATRICULA 2: %s\n", mat2);
   printf("MATRICULA 3: %s\n", mat3);
   printf("=========================\n");
   printf("CIDADES: %d\n", cidades);
   printf("=========================\n");
   printf("PONTO DE PARTIDA: %d\n", Caixeiro.PontoDePartida);
   printf("=========================\n");
   printf("DISTANCIAS\n");
   printf("=========================\n");
   Permuta(S, 0, tam-1, Caixeiro, cidades, M, &menor, menorpermuta);
   printf("=========================\n");
   printf("MENOR DISTANCIA: %d\n", menor);
   printf("=========================\n");
   printf("SEQUENCIA DE DADOS:\n");
   for(int i=0; i<cidades; i++){
       printf("%d ", menorpermuta[i]);
   }
   printf("%d", Caixeiro.PontoDePartida);
   printf("\n");

   printf("=========================\n");
   printf("MATRIZ DISTÂNCIA\n");
   for(int i=0; i<cidades; i++){
       for(int j=0; j<cidades; j++){
           printf("%d ", M[i][j]);
       }
       printf("\n");
   }

   //Finalização do temporizador de contagem do Tempo de Execução do Codigo
   Caixeiro.tf = clock();
   Caixeiro.tempo_gasto = ((double) (Caixeiro.tf - Caixeiro.t0))/CLOCKS_PER_SEC;
   printf("=========================\n");
   printf("TEMPO GASTO: %lfs\n", Caixeiro.tempo_gasto);
   printf("=========================\n");
}
