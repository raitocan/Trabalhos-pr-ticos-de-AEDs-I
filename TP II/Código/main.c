#include "Caixeiro.h"

int main(int argc, char *argv[]){
  TipoCaixeiro Caixeiro;
  int cont=0, op;
  char mat1[5], mat2[5], mat3[5];
  Caixeiro.t0 = clock();

  while(op != 2){
        printf("=========================\n");
        printf("0 - LEITURA DO ARQUIVO\n");
        printf("1 - MODO INTERATIVO\n");
        printf("2 - SAIR\n");
        printf("=========================\n");
        printf("OPERACAO: ");
        scanf("%d", &op);

        if(op == 0){
            char arq[20];
            printf("Digite o nome do arquivo com a extensão: ");
            scanf("%s", arq);

            FILE *f = fopen(arq, "r");
            int cont=0;
            char palavra[50];

            //Leitura das Matriculas dos Alunos
            fscanf(f, "%s", mat1);
            fscanf(f, "%s", mat2);
            fscanf(f, "%s", mat3);

            //Leitura do Número de Cidades
            fscanf(f, "%d", &Caixeiro.NumCidades);

            int v[Caixeiro.NumCidades];
            int M[Caixeiro.NumCidades][Caixeiro.NumCidades];

            //Inicialização do Vetor de Permutações
            for(int i=0; i<Caixeiro.NumCidades; i++){
                v[i] = cont;
                cont++;
            }

            int tam_v = sizeof(v) / sizeof(int);

            //Leitura das Distancias da Matriz
            for(int i=0; i<Caixeiro.NumCidades; i++){
                for(int j=0; j<Caixeiro.NumCidades; j++){
                    if(i == j){
                        M[i][j] = 0;
                    } else{
                        fscanf(f, "%d", &M[i][j]);
                    }
                }
            }
            fclose(f);
            Partida(&Caixeiro, mat1, mat2, mat3);
            Imprime(Caixeiro, mat1, mat2, mat3, Caixeiro.NumCidades, tam_v, v, M);

        } else if(op == 1){
          printf("Digite o número de cidades: ");
          scanf("%d", &Caixeiro.NumCidades);
          int v[Caixeiro.NumCidades];
          int M[Caixeiro.NumCidades][Caixeiro.NumCidades];

          printf("Digite as Matriculas: ");
          printf("Matricula 1: ");
          scanf("%s", mat1);
          printf("Matricula 2: ");
          scanf("%s", mat2);
          printf("Matricula 3: ");
          scanf("%s", mat3);

          for(int i=0; i<Caixeiro.NumCidades; i++){
            v[i] = cont;
            cont++;
          }

	         int tam_v = sizeof(v) / sizeof(int);

           for(int i=0; i<Caixeiro.NumCidades; i++){
             for(int j=0; j<Caixeiro.NumCidades; j++){
               if(i==j){
                 M[i][j] = 0;
               } else{
                 M[i][j] = rand()%100;
               }
             }
           }

          Partida(&Caixeiro, mat1, mat2, mat3);
          Imprime(Caixeiro, mat1, mat2, mat3, Caixeiro.NumCidades, tam_v, v, M);
        }

      }
      return 0;
}
