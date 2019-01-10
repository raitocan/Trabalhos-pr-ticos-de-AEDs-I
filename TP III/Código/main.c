#include "Ordena.h"


int main(){
    int Menu, Exit = 0, Casos, preencher, NumVoo, i, j, ExitCasos = 0, Ordenar = 0, Tam, Indice;
    Voo aux;
    Inicia_Random();
    while (Exit != 1) {
        printf("Saudacoes! Digite:\n");
        printf("1) Modo Manual\n");
        printf("2) Modo Arquivo\n");
        printf("3) Sair\n");
        scanf("%d", &Menu);
        if (Menu == 1) {
            printf("Voce escolheu: Modo Manual \n");
            printf("Escolha qual cenario voce deseja testar:\n");
            printf("0)Sair\n");
            printf("1)Cenario 1\n");
            printf("2)Cenario 2\n");
            printf("3)Cenario 3\n");
            printf("4)Cenario 4\n");
            printf("5)Cenario 5\n");
            printf("6)Cenario 6\n");
            printf("7)Cenario 7\n");
            printf("8)Cenario 8\n");
            printf("9)Cenario 9\n");
            printf("10)Cenario 10\n");
            printf("11)Cenario 11\n");
            printf("12)Cenario 12\n");
            scanf("%d", &Menu);
            if (Menu == 0) {
                break;
            }

            if (Menu == 1) {
                printf("Voce escolheu o Cenario 1\n");
                //Especificações do Cenário
                Tam = 365;
                preencher = (Tam * 0.2);
                NumVoo = 10;

                //Alocar a Matriz dinamicamente
                Matriz_voos *Vetor, *Aux;
                Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                int *V;
                V = (int *) malloc((Tam + 1) * sizeof(int));

                //Definir o ID da Matriz//
                Random_Vector(V, Tam, 0, Tam + 1);
                for (i = 0; i < Tam; i++) {
                    Set_Identificador(&Vetor[i], V[i]);
                }

                //Preenchendo somente a porcentagem;
                for (i = 0; i < preencher; i++) {
                    Inicializar_Matriz(&Vetor[i]);
                    for (j = 0; j < NumVoo; j++) {
                        aux = Voo_Random();
                        Inserir_Elementos_Matriz(&Vetor[i], aux);
                    }
                }


                while (ExitCasos == 0) {
                    for (i = 0; i < Tam; i++) {
                        Aux[i] = Vetor[i];
                    }
                    printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                    printf("1) SelectionSort\n");
                    printf("2) InsertionSort\n");
                    printf("3) BubbleSort\n");
                    printf("4) ShellSort\n");
                    printf("5) QuickSort\n");
                    printf("6) HeapSort\n");
                    printf("7) Exibir Matriz de acordo com indice\n");
                    printf("0) Sair\n");

                    scanf("%d", &Menu);
                    if (Menu == 0) {
                        ExitCasos = 1;
                    }
                    if (Menu == 1) {
                        printf("Voce escolheu: SelectionSort");
                        SelectionSort(Aux, Tam);
                    }
                    if (Menu == 2) {
                        printf("Voce escolheu: InsertionSort");
                        InserctionSort(Aux, Tam);
                    }
                    if (Menu == 3) {
                        printf("Voce escolheu: BubbleSort");
                        BubbleSort(Aux, Tam);
                    }
                    if (Menu == 4) {
                        printf("Voce escolheu: ShellSort");
                        ShellSort(Aux, Tam);
                    }
                    if (Menu == 5) {
                        printf("Voce escolheu: QuickSort");
                        QuickSort(Aux, Tam);
                    }
                    if (Menu == 6) {
                        printf("Voce escolheu: HeapSort");
                        HeapSort(Aux, Tam);
                    }
                    if (Menu == 7) {
                        printf("Digite o Indice no vetor da Matriz: ");
                        scanf("%d", &Indice);
                        if (Indice < Tam && Indice >= 0) {
                            Imprime_Matriz_All(&Vetor[Indice]);
                        }
                    }
                }
                ExitCasos = 0;

            }
            if (Menu == 2) {
                printf("Voce escolheu o Cenário 2\n");
                //Especificações do Cenário
                Tam = 365;
                preencher = (Tam * 1);
                NumVoo = 10;

                //Alocar a Matriz dinamicamente
                Matriz_voos *Vetor, *Aux;
                Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                int *V;
                V = (int *) malloc((Tam + 1) * sizeof(int));

                //Definir o ID da Matriz//
                Random_Vector(V, Tam, 0, Tam + 1);
                for (i = 0; i < Tam; i++) {
                    Set_Identificador(&Vetor[i], V[i]);
                }

                //Preenchendo somente a porcentagem;
                for (i = 0; i < preencher; i++) {
                    Inicializar_Matriz(&Vetor[i]);
                    for (j = 0; j < NumVoo; j++) {
                        aux = Voo_Random();
                        Inserir_Elementos_Matriz(&Vetor[i], aux);
                    }
                }


                while (ExitCasos == 0) {
                    for (i = 0; i < Tam; i++) {
                        Aux[i] = Vetor[i];
                    }
                    printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                    printf("1) SelectionSort\n");
                    printf("2) InsertionSort\n");
                    printf("3) BubbleSort\n");
                    printf("4) ShellSort\n");
                    printf("5) QuickSort\n");
                    printf("6) HeapSort\n");
                    printf("7) Exibir Matriz de acordo com indice\n");
                    printf("0) Sair\n");

                    scanf("%d", &Menu);
                    if (Menu == 0) {
                        ExitCasos = 1;
                    }
                    if (Menu == 1) {
                        printf("Voce escolheu: SelectionSort");
                        SelectionSort(Aux, Tam);
                    }
                    if (Menu == 2) {
                        printf("Voce escolheu: InsertionSort");
                        InserctionSort(Aux, Tam);
                    }
                    if (Menu == 3) {
                        printf("Voce escolheu: BubbleSort");
                        BubbleSort(Aux, Tam);
                    }
                    if (Menu == 4) {
                        printf("Voce escolheu: ShellSort");
                        ShellSort(Aux, Tam);
                    }
                    if (Menu == 5) {
                        printf("Voce escolheu: QuickSort");
                        //QuickSort(Aux, Tam);
                        QuickSortA(Aux,Tam);
                    }
                    if (Menu == 6) {
                        printf("Voce escolheu: HeapSort");
                        HeapSort(Aux, Tam);
                    }
                    if (Menu == 7) {
                        printf("Digite o Indice no vetor da Matriz: ");
                        scanf("%d", &Indice);
                        if (Indice < Tam && Indice >= 0) {
                            Imprime_Matriz_All(&Vetor[Indice]);
                        }
                    }
                }
                ExitCasos = 0;

            }
            if (Menu == 3) {
                printf("Voce escolheu o Cenário 3\n");
                //Especificações do Cenário
                Tam = 365;
                preencher = (Tam * 0.2);
                NumVoo = 100;

                //Alocar a Matriz dinamicamente
                Matriz_voos *Vetor, *Aux;
                Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                int *V;
                V = (int *) malloc((Tam + 1) * sizeof(int));

                //Definir o ID da Matriz//
                Random_Vector(V, Tam, 0, Tam + 1);
                for (i = 0; i < Tam; i++) {
                    Set_Identificador(&Vetor[i], V[i]);
                }

                //Preenchendo somente a porcentagem;
                for (i = 0; i < preencher; i++) {
                    Inicializar_Matriz(&Vetor[i]);
                    for (j = 0; j < NumVoo; j++) {
                        aux = Voo_Random();
                        Inserir_Elementos_Matriz(&Vetor[i], aux);
                    }
                }


                while (ExitCasos == 0) {
                    for (i = 0; i < Tam; i++) {
                        Aux[i] = Vetor[i];
                    }
                    printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                    printf("1) SelectionSort\n");
                    printf("2) InsertionSort\n");
                    printf("3) BubbleSort\n");
                    printf("4) ShellSort\n");
                    printf("5) QuickSort\n");
                    printf("6) HeapSort\n");
                    printf("7) Exibir Matriz de acordo com indice\n");
                    printf("0) Sair\n");

                    scanf("%d", &Menu);
                    if (Menu == 0) {
                        ExitCasos = 1;
                    }
                    if (Menu == 1) {
                        printf("Voce escolheu: SelectionSort");
                        SelectionSort(Aux, Tam);
                    }
                    if (Menu == 2) {
                        printf("Voce escolheu: InsertionSort");
                        InserctionSort(Aux, Tam);
                    }
                    if (Menu == 3) {
                        printf("Voce escolheu: BubbleSort");
                        BubbleSort(Aux, Tam);
                    }
                    if (Menu == 4) {
                        printf("Voce escolheu: ShellSort");
                        ShellSort(Aux, Tam);
                    }
                    if (Menu == 5) {
                        printf("Voce escolheu: QuickSort");
                        QuickSort(Aux, Tam);
                    }
                    if (Menu == 6) {
                        printf("Voce escolheu: HeapSort");
                        HeapSort(Aux, Tam);
                    }
                    if (Menu == 7) {
                        printf("Digite o Indice no vetor da Matriz: ");
                        scanf("%d", &Indice);
                        if (Indice < Tam && Indice >= 0) {
                            Imprime_Matriz_All(&Vetor[Indice]);
                        }
                    }
                }
                ExitCasos = 0;

            }
            if (Menu == 4) {
                printf("Voce escolheu o Cenário 4\n");
                //Especificações do Cenário
                Tam = 365;
                preencher = (Tam * 1);
                NumVoo = 100;

                //Alocar a Matriz dinamicamente
                Matriz_voos *Vetor, *Aux;
                Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                int *V;
                V = (int *) malloc((Tam + 1) * sizeof(int));

                //Definir o ID da Matriz//
                Random_Vector(V, Tam, 0, Tam + 1);
                for (i = 0; i < Tam; i++) {
                    Set_Identificador(&Vetor[i], V[i]);
                }

                //Preenchendo somente a porcentagem;
                for (i = 0; i < preencher; i++) {
                    Inicializar_Matriz(&Vetor[i]);
                    for (j = 0; j < NumVoo; j++) {
                        aux = Voo_Random();
                        Inserir_Elementos_Matriz(&Vetor[i], aux);
                    }
                }


                while (ExitCasos == 0) {
                    for (i = 0; i < Tam; i++) {
                        Aux[i] = Vetor[i];
                    }
                    printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                    printf("1) SelectionSort\n");
                    printf("2) InsertionSort\n");
                    printf("3) BubbleSort\n");
                    printf("4) ShellSort\n");
                    printf("5) QuickSort\n");
                    printf("6) HeapSort\n");
                    printf("7) Exibir Matriz de acordo com indice\n");
                    printf("0) Sair\n");

                    scanf("%d", &Menu);
                    if (Menu == 0) {
                        ExitCasos = 1;
                    }
                    if (Menu == 1) {
                        printf("Voce escolheu: SelectionSort");
                        SelectionSort(Aux, Tam);
                    }
                    if (Menu == 2) {
                        printf("Voce escolheu: InsertionSort");
                        InserctionSort(Aux, Tam);
                    }
                    if (Menu == 3) {
                        printf("Voce escolheu: BubbleSort");
                        BubbleSort(Aux, Tam);
                    }
                    if (Menu == 4) {
                        printf("Voce escolheu: ShellSort");
                        ShellSort(Aux, Tam);
                    }
                    if (Menu == 5) {
                        printf("Voce escolheu: QuickSort");
                        QuickSort(Aux, Tam);
                    }
                    if (Menu == 6) {
                        printf("Voce escolheu: HeapSort");
                        HeapSort(Aux, Tam);
                    }
                    if (Menu == 7) {
                        printf("Digite o Indice no vetor da Matriz: ");
                        scanf("%d", &Indice);
                        if (Indice < Tam && Indice >= 0) {
                            Imprime_Matriz_All(&Vetor[Indice]);
                        }
                    }
                }
                ExitCasos = 0;

            }
            if (Menu == 5) {
                printf("Voce escolheu o Cenário 5\n");
                //Especificações do Cenário
                Tam = 3650;
                preencher = (Tam * 0.2);
                NumVoo = 10;

                //Alocar a Matriz dinamicamente
                Matriz_voos *Vetor, *Aux;
                Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                int *V;
                V = (int *) malloc((Tam + 1) * sizeof(int));

                //Definir o ID da Matriz//
                Random_Vector(V, Tam, 0, Tam + 1);
                for (i = 0; i < Tam; i++) {
                    Set_Identificador(&Vetor[i], V[i]);
                }

                //Preenchendo somente a porcentagem;
                for (i = 0; i < preencher; i++) {
                    Inicializar_Matriz(&Vetor[i]);
                    for (j = 0; j < NumVoo; j++) {
                        aux = Voo_Random();
                        Inserir_Elementos_Matriz(&Vetor[i], aux);
                    }
                }


                while (ExitCasos == 0) {
                    for (i = 0; i < Tam; i++) {
                        Aux[i] = Vetor[i];
                    }
                    printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                    printf("1) SelectionSort\n");
                    printf("2) InsertionSort\n");
                    printf("3) BubbleSort\n");
                    printf("4) ShellSort\n");
                    printf("5) QuickSort\n");
                    printf("6) HeapSort\n");
                    printf("7) Exibir Matriz de acordo com indice\n");
                    printf("0) Sair\n");

                    scanf("%d", &Menu);
                    if (Menu == 0) {
                        ExitCasos = 1;
                    }
                    if (Menu == 1) {
                        printf("Voce escolheu: SelectionSort");
                        SelectionSort(Aux, Tam);
                    }
                    if (Menu == 2) {
                        printf("Voce escolheu: InsertionSort");
                        InserctionSort(Aux, Tam);
                    }
                    if (Menu == 3) {
                        printf("Voce escolheu: BubbleSort");
                        BubbleSort(Aux, Tam);
                    }
                    if (Menu == 4) {
                        printf("Voce escolheu: ShellSort");
                        ShellSort(Aux, Tam);
                    }
                    if (Menu == 5) {
                        printf("Voce escolheu: QuickSort");
                        QuickSort(Aux, Tam);
                    }
                    if (Menu == 6) {
                        printf("Voce escolheu: HeapSort");
                        HeapSort(Aux, Tam);
                    }
                    if (Menu == 7) {
                        printf("Digite o Indice no vetor da Matriz: ");
                        scanf("%d", &Indice);
                        if (Indice < Tam && Indice >= 0) {
                            Imprime_Matriz_All(&Vetor[Indice]);
                        }
                    }
                }
                ExitCasos = 0;

            }
            if (Menu == 6) {
                printf("Voce escolheu o Cenario 6\n");
                //Especificações do Cenário
                Tam = 3650;
                preencher = (Tam * 1);
                NumVoo = 100;

                //Alocar a Matriz dinamicamente
                Matriz_voos *Vetor, *Aux;
                Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                int *V;
                V = (int *) malloc((Tam + 1) * sizeof(int));

                //Definir o ID da Matriz//
                Random_Vector(V, Tam, 0, Tam + 1);
                for (i = 0; i < Tam; i++) {
                    Set_Identificador(&Vetor[i], V[i]);
                }

                //Preenchendo somente a porcentagem;
                for (i = 0; i < preencher; i++) {
                    Inicializar_Matriz(&Vetor[i]);
                    for (j = 0; j < NumVoo; j++) {
                        aux = Voo_Random();
                        Inserir_Elementos_Matriz(&Vetor[i], aux);
                    }
                }


                while (ExitCasos == 0) {
                    for (i = 0; i < Tam; i++) {
                        Aux[i] = Vetor[i];
                    }
                    printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                    printf("1) SelectionSort\n");
                    printf("2) InsertionSort\n");
                    printf("3) BubbleSort\n");
                    printf("4) ShellSort\n");
                    printf("5) QuickSort\n");
                    printf("6) HeapSort\n");
                    printf("7) Exibir Matriz de acordo com indice\n");
                    printf("0) Sair\n");

                    scanf("%d", &Menu);
                    if (Menu == 0) {
                        ExitCasos = 1;
                    }
                    if (Menu == 1) {
                        printf("Voce escolheu: SelectionSort");
                        SelectionSort(Aux, Tam);
                    }
                    if (Menu == 2) {
                        printf("Voce escolheu: InsertionSort");
                        InserctionSort(Aux, Tam);
                    }
                    if (Menu == 3) {
                        printf("Voce escolheu: BubbleSort");
                        BubbleSort(Aux, Tam);
                    }
                    if (Menu == 4) {
                        printf("Voce escolheu: ShellSort");
                        ShellSort(Aux, Tam);
                    }
                    if (Menu == 5) {
                        printf("Voce escolheu: QuickSort");
                        QuickSort(Aux, Tam);
                    }
                    if (Menu == 6) {
                        printf("Voce escolheu: HeapSort");
                        HeapSort(Aux, Tam);
                    }
                    if (Menu == 7) {
                        printf("Digite o Indice no vetor da Matriz: ");
                        scanf("%d", &Indice);
                        if (Indice < Tam && Indice >= 0) {
                            Imprime_Matriz_All(&Vetor[Indice]);
                        }
                    }
                }
                ExitCasos = 0;

            }
            if (Menu == 7) {
                printf("Voce escolheu o Cenario 7\n");
                //Especificações do Cenario
                Tam = 3650;
                preencher = (Tam * 0.2);
                NumVoo = 100;

                //Alocar a Matriz dinamicamente
                Matriz_voos *Vetor, *Aux;
                Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                int *V;
                V = (int *) malloc((Tam + 1) * sizeof(int));

                //Definir o ID da Matriz//
                Random_Vector(V, Tam, 0, Tam + 1);
                for (i = 0; i < Tam; i++) {
                    Set_Identificador(&Vetor[i], V[i]);
                }

                //Preenchendo somente a porcentagem;
                for (i = 0; i < preencher; i++) {
                    Inicializar_Matriz(&Vetor[i]);
                    for (j = 0; j < NumVoo; j++) {
                        aux = Voo_Random();
                        Inserir_Elementos_Matriz(&Vetor[i], aux);
                    }
                }


                while (ExitCasos == 0) {
                    for (i = 0; i < Tam; i++) {
                        Aux[i] = Vetor[i];
                    }
                    printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                    printf("1) SelectionSort\n");
                    printf("2) InsertionSort\n");
                    printf("3) BubbleSort\n");
                    printf("4) ShellSort\n");
                    printf("5) QuickSort\n");
                    printf("6) HeapSort\n");
                    printf("7) Exibir Matriz de acordo com indice\n");
                    printf("0) Sair\n");

                    scanf("%d", &Menu);
                    if (Menu == 0) {
                        ExitCasos = 1;
                    }
                    if (Menu == 1) {
                        printf("Voce escolheu: SelectionSort");
                        SelectionSort(Aux, Tam);
                    }
                    if (Menu == 2) {
                        printf("Voce escolheu: InsertionSort");
                        InserctionSort(Aux, Tam);
                    }
                    if (Menu == 3) {
                        printf("Voce escolheu: BubbleSort");
                        BubbleSort(Aux, Tam);
                    }
                    if (Menu == 4) {
                        printf("Voce escolheu: ShellSort");
                        ShellSort(Aux, Tam);
                    }
                    if (Menu == 5) {
                        printf("Voce escolheu: QuickSort");
                        QuickSort(Aux, Tam);
                    }
                    if (Menu == 6) {
                        printf("Voce escolheu: HeapSort");
                        HeapSort(Aux, Tam);
                    }
                    if (Menu == 7) {
                        printf("Digite o Indice no vetor da Matriz: ");
                        scanf("%d", &Indice);
                        if (Indice < Tam && Indice >= 0) {
                            Imprime_Matriz_All(&Vetor[Indice]);
                        }
                    }
                }
                ExitCasos = 0;

            }
            if (Menu == 8) {
                printf("Voce escolheu o Cenario 8\n");
                //Especificações do Cenario
                Tam = 3650;
                preencher = (Tam * 1);
                NumVoo = 100;
                //Alocar a Matriz dinamicamente
                Matriz_voos *Vetor, *Aux;
                Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                int *V;
                V = (int *) malloc((Tam + 1) * sizeof(int));

                //Definir o ID da Matriz//
                Random_Vector(V, Tam, 0, Tam + 1);
                for (i = 0; i < Tam; i++) {
                    Set_Identificador(&Vetor[i], V[i]);
                }

                //Preenchendo somente a porcentagem;
                for (i = 0; i < preencher; i++) {
                    Inicializar_Matriz(&Vetor[i]);
                    for (j = 0; j < NumVoo; j++) {
                        aux = Voo_Random();
                        Inserir_Elementos_Matriz(&Vetor[i], aux);
                    }
                }


                while (ExitCasos == 0) {
                    for (i = 0; i < Tam; i++) {
                        Aux[i] = Vetor[i];
                    }
                    printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                    printf("1) SelectionSort\n");
                    printf("2) InsertionSort\n");
                    printf("3) BubbleSort\n");
                    printf("4) ShellSort\n");
                    printf("5) QuickSort\n");
                    printf("6) HeapSort\n");
                    printf("7) Exibir Matriz de acordo com indice\n");
                    printf("0) Sair\n");

                    scanf("%d", &Menu);
                    if (Menu == 0) {
                        ExitCasos = 1;
                    }
                    if (Menu == 1) {
                        printf("Voce escolheu: SelectionSort");
                        SelectionSort(Aux, Tam);
                    }
                    if (Menu == 2) {
                        printf("Voce escolheu: InsertionSort");
                        InserctionSort(Aux, Tam);
                    }
                    if (Menu == 3) {
                        printf("Voce escolheu: BubbleSort");
                        BubbleSort(Aux, Tam);
                    }
                    if (Menu == 4) {
                        printf("Voce escolheu: ShellSort");
                        ShellSort(Aux, Tam);
                    }
                    if (Menu == 5) {
                        printf("Voce escolheu: QuickSort");
                        QuickSort(Aux, Tam);
                    }
                    if (Menu == 6) {
                        printf("Voce escolheu: HeapSort");
                        HeapSort(Aux, Tam);
                    }
                    if (Menu == 7) {
                        printf("Digite o Indice no vetor da Matriz: ");
                        scanf("%d", &Indice);
                        if (Indice < Tam && Indice >= 0) {
                            Imprime_Matriz_All(&Vetor[Indice]);
                        }
                    }
                }
                ExitCasos = 0;
            }
            if (Menu == 9) {
                printf("Voce escolheu o Cenario 9\n");
                //Especificações do Cenario
                Tam = 36500;
                preencher = (Tam * 0.2);
                NumVoo = 10;

                //Alocar a Matriz dinamicamente
                Matriz_voos *Vetor, *Aux;
                Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                int *V;
                V = (int *) malloc((Tam + 1) * sizeof(int));

                //Definir o ID da Matriz//
                Random_Vector(V, Tam, 0, Tam + 1);
                for (i = 0; i < Tam; i++) {
                    Set_Identificador(&Vetor[i], V[i]);
                }

                //Preenchendo somente a porcentagem;
                for (i = 0; i < preencher; i++) {
                    Inicializar_Matriz(&Vetor[i]);
                    for (j = 0; j < NumVoo; j++) {
                        aux = Voo_Random();
                        Inserir_Elementos_Matriz(&Vetor[i], aux);
                    }
                }


                while (ExitCasos == 0) {
                    for (i = 0; i < Tam; i++) {
                        Aux[i] = Vetor[i];
                    }
                    printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                    printf("1) SelectionSort\n");
                    printf("2) InsertionSort\n");
                    printf("3) BubbleSort\n");
                    printf("4) ShellSort\n");
                    printf("5) QuickSort\n");
                    printf("6) HeapSort\n");
                    printf("7) Exibir Matriz de acordo com indice\n");
                    printf("0) Sair\n");

                    scanf("%d", &Menu);
                    if (Menu == 0) {
                        ExitCasos = 1;
                    }
                    if (Menu == 1) {
                        printf("Voce escolheu: SelectionSort");
                        SelectionSort(Aux, Tam);
                    }
                    if (Menu == 2) {
                        printf("Voce escolheu: InsertionSort");
                        InserctionSort(Aux, Tam);
                    }
                    if (Menu == 3) {
                        printf("Voce escolheu: BubbleSort");
                        BubbleSort(Aux, Tam);
                    }
                    if (Menu == 4) {
                        printf("Voce escolheu: ShellSort");
                        ShellSort(Aux, Tam);
                    }
                    if (Menu == 5) {
                        printf("Voce escolheu: QuickSort");
                        QuickSort(Aux, Tam);
                    }
                    if (Menu == 6) {
                        printf("Voce escolheu: HeapSort");
                        HeapSort(Aux, Tam);
                    }
                    if (Menu == 7) {
                        printf("Digite o Indice no vetor da Matriz: ");
                        scanf("%d", &Indice);
                        if (Indice < Tam && Indice >= 0) {
                            Imprime_Matriz_All(&Vetor[Indice]);
                        }
                    }
                }
                ExitCasos = 0;
            }
            if (Menu == 10) {
                printf("Voce escolheu o Cenario 10\n");
                //Especificações do Cenario
                Tam = 36500;
                preencher = (Tam * 1);
                NumVoo = 10;
                //Alocar a Matriz dinamicamente
                Matriz_voos *Vetor, *Aux;
                Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                int *V;
                V = (int *) malloc((Tam + 1) * sizeof(int));

                //Definir o ID da Matriz//
                Random_Vector(V, Tam, 0, Tam + 1);
                for (i = 0; i < Tam; i++) {
                    Set_Identificador(&Vetor[i], V[i]);
                }

                //Preenchendo somente a porcentagem;
                for (i = 0; i < preencher; i++) {
                    Inicializar_Matriz(&Vetor[i]);
                    for (j = 0; j < NumVoo; j++) {
                        aux = Voo_Random();
                        Inserir_Elementos_Matriz(&Vetor[i], aux);
                    }
                }


                while (ExitCasos == 0) {
                    for (i = 0; i < Tam; i++) {
                        Aux[i] = Vetor[i];
                    }
                    printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                    printf("1) SelectionSort\n");
                    printf("2) InsertionSort\n");
                    printf("3) BubbleSort\n");
                    printf("4) ShellSort\n");
                    printf("5) QuickSort\n");
                    printf("6) HeapSort\n");
                    printf("7) Exibir Matriz de acordo com indice\n");
                    printf("0) Sair\n");

                    scanf("%d", &Menu);
                    if (Menu == 0) {
                        ExitCasos = 1;
                    }
                    if (Menu == 1) {
                        printf("Voce escolheu: SelectionSort");
                        SelectionSort(Aux, Tam);
                    }
                    if (Menu == 2) {
                        printf("Voce escolheu: InsertionSort");
                        InserctionSort(Aux, Tam);
                    }
                    if (Menu == 3) {
                        printf("Voce escolheu: BubbleSort");
                        BubbleSort(Aux, Tam);
                    }
                    if (Menu == 4) {
                        printf("Voce escolheu: ShellSort");
                        ShellSort(Aux, Tam);
                    }
                    if (Menu == 5) {
                        printf("Voce escolheu: QuickSort");
                        QuickSort(Aux, Tam);
                    }
                    if (Menu == 6) {
                        printf("Voce escolheu: HeapSort");
                        HeapSort(Aux, Tam);
                    }
                    if (Menu == 7) {
                        printf("Digite o Indice no vetor da Matriz: ");
                        scanf("%d", &Indice);
                        if (Indice < Tam && Indice >= 0) {
                            Imprime_Matriz_All(&Vetor[Indice]);
                        }
                    }
                }
                ExitCasos = 0;
            }
            if (Menu == 11) {
                printf("Voce escolheu o Cenario 11\n");
                //Especificações do Cenario
                Tam = 36500;
                preencher = (Tam * 0.2);
                NumVoo = 100;

                //Alocar a Matriz dinamicamente
                Matriz_voos *Vetor, *Aux;
                Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                int *V;
                V = (int *) malloc((Tam + 1) * sizeof(int));

                //Definir o ID da Matriz//
                Random_Vector(V, Tam, 0, Tam + 1);
                for (i = 0; i < Tam; i++) {
                    Set_Identificador(&Vetor[i], V[i]);
                }

                //Preenchendo somente a porcentagem;
                for (i = 0; i < preencher; i++) {
                    Inicializar_Matriz(&Vetor[i]);
                    for (j = 0; j < NumVoo; j++) {
                        aux = Voo_Random();
                        Inserir_Elementos_Matriz(&Vetor[i], aux);
                    }
                }


                while (ExitCasos == 0) {
                    for (i = 0; i < Tam; i++) {
                        Aux[i] = Vetor[i];
                    }
                    printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                    printf("1) SelectionSort\n");
                    printf("2) InsertionSort\n");
                    printf("3) BubbleSort\n");
                    printf("4) ShellSort\n");
                    printf("5) QuickSort\n");
                    printf("6) HeapSort\n");
                    printf("7) Exibir Matriz de acordo com indice\n");
                    printf("0) Sair\n");

                    scanf("%d", &Menu);
                    if (Menu == 0) {
                        ExitCasos = 1;
                    }
                    if (Menu == 1) {
                        printf("Voce escolheu: SelectionSort");
                        SelectionSort(Aux, Tam);
                    }
                    if (Menu == 2) {
                        printf("Voce escolheu: InsertionSort");
                        InserctionSort(Aux, Tam);
                    }
                    if (Menu == 3) {
                        printf("Voce escolheu: BubbleSort");
                        BubbleSort(Aux, Tam);
                    }
                    if (Menu == 4) {
                        printf("Voce escolheu: ShellSort");
                        ShellSort(Aux, Tam);
                    }
                    if (Menu == 5) {
                        printf("Voce escolheu: QuickSort");
                        QuickSort(Aux, Tam);
                    }
                    if (Menu == 6) {
                        printf("Voce escolheu: HeapSort");
                        HeapSort(Aux, Tam);
                    }
                    if (Menu == 7) {
                        printf("Digite o Indice no vetor da Matriz: ");
                        scanf("%d", &Indice);
                        if (Indice < Tam && Indice >= 0) {
                            Imprime_Matriz_All(&Vetor[Indice]);
                        }
                    }
                }
                ExitCasos = 0;
            }
            if (Menu == 12) {
                printf("Voce escolheu o Cenario 12\n");
                //Especificações do Cenario
                Tam = 36500;
                preencher = (Tam * 1);
                NumVoo = 100;

                //Alocar a Matriz dinamicamente
                Matriz_voos *Vetor, *Aux;
                Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                int *V;
                V = (int *) malloc((Tam + 1) * sizeof(int));

                //Definir o ID da Matriz//
                Random_Vector(V, Tam, 0, Tam + 1);
                for (i = 0; i < Tam; i++) {
                    Set_Identificador(&Vetor[i], V[i]);
                }

                //Preenchendo somente a porcentagem;
                for (i = 0; i < preencher; i++) {
                    Inicializar_Matriz(&Vetor[i]);
                    printf("%d\n",i);
                    for (j = 0; j < NumVoo; j++) {
                        aux = Voo_Random();
                        Inserir_Elementos_Matriz(&Vetor[i], aux);
                    }
                }


                while (ExitCasos == 0) {
                    for (i = 0; i < Tam; i++) {
                        Aux[i] = Vetor[i];
                    }
                    printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                    printf("1) SelectionSort\n");
                    printf("2) InsertionSort\n");
                    printf("3) BubbleSort\n");
                    printf("4) ShellSort\n");
                    printf("5) QuickSort\n");
                    printf("6) HeapSort\n");
                    printf("7) Exibir Matriz de acordo com indice\n");
                    printf("0) Sair\n");

                    scanf("%d", &Menu);
                    if (Menu == 0) {
                        ExitCasos = 1;
                    }
                    if (Menu == 1) {
                        printf("Voce escolheu: SelectionSort");
                        SelectionSort(Aux, Tam);
                    }
                    if (Menu == 2) {
                        printf("Voce escolheu: InsertionSort");
                        InserctionSort(Aux, Tam);
                    }
                    if (Menu == 3) {
                        printf("Voce escolheu: BubbleSort");
                        BubbleSort(Aux, Tam);
                    }
                    if (Menu == 4) {
                        printf("Voce escolheu: ShellSort");
                        ShellSort(Aux, Tam);
                    }
                    if (Menu == 5) {
                        printf("Voce escolheu: QuickSort");
                        QuickSort(Aux, Tam);
                    }
                    if (Menu == 6) {
                        printf("Voce escolheu: HeapSort");
                        HeapSort(Aux, Tam);
                    }
                    if (Menu == 7) {
                        printf("Digite o Indice no vetor da Matriz: ");
                        scanf("%d", &Indice);
                        if (Indice < Tam && Indice >= 0) {
                            Imprime_Matriz_All(&Vetor[Indice]);
                        }
                    }
                }
                ExitCasos = 0;
            }

        } else if (Menu == 2) {
            printf("Voce escolheu: Modo Arquivo\n");
            FILE *arq; //Cria arquivo
            char endarq[100];
            int cont = 0;
            printf("Digite o nome e o tipo do arquivo:");//DEFINE NOME DA ARQUIVO
            scanf("%s", endarq);
            arq = fopen(&endarq, "r"); //ABRE PARA LEITURA O ARQUIVO
            if (arq == NULL) {//TRATAMENTO PARA AQUIVO NULL
                printf("-------------------ERRO!---------------------\n");
            } else {
                if (strcmp(endarq, "cenario1.txt") == 0) {
                    //Especificações do Cenário
                    printf("Voce escolheu: Cenario 1\n");
                    Tam = 365;
                    preencher = (Tam * 0.2);
                    NumVoo = 10;
                    //Alocar a Matriz dinamicamente
                    Matriz_voos *Vetor, *Aux;
                    Voo Temporario;
                    inicia_voo(&Temporario);
                    Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                    Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                    int *V, *Val, auxint;
                    V = (int *) malloc((Tam + 1) * sizeof(int));
                    Val = (int *) malloc((Tam + 1) * sizeof(int));

                    //Definir o ID da Matriz//
                    Random_Vector(V, Tam, 0, Tam + 1);
                    for (i = 0; i < Tam; i++) {
                        Set_Identificador(&Vetor[i], Val[i]);
                    }

                    //INSERINDO OS VOOS NA MATRIZ
                    while (!feof(arq)) { //PARA SOMENTE DEPOIS DE LER O ARQUIVO
                        for (i = 0; i < preencher; i++) {
                            fscanf(arq, "%d", &auxint);
                            Val[i] = auxint;
                        }
                        for (i = 0; i < preencher; i++) {
                            Inicializar_Matriz(&Vetor[i]);
                            for (j = 0; j < NumVoo; j++) {
                                fscanf(arq, "%s %s %s %s %d", Temporario.hora_decolagem, Temporario.hora_previsao_pouso,
                                       Temporario.aeroporto_decolagem, Temporario.aeroporto_pouso,
                                       &Temporario.id_pista_decolagem);
                                Inserir_Elementos_Matriz(&Vetor[i], Temporario);
                            }
                        }
                    }
                    ExitCasos = 0;
                    while (ExitCasos == 0) {
                        for (i = 0; i < Tam; i++) {
                            Aux[i] = Vetor[i];
                        }
                        printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                        printf("1) SelectionSort\n");
                        printf("2) InsertionSort\n");
                        printf("3) BubbleSort\n");
                        printf("4) ShellSort\n");
                        printf("5) QuickSort\n");
                        printf("6) HeapSort\n");
                        printf("7) Exibir Matriz de acordo com indice\n");
                        printf("0) Sair\n");
                        scanf("%d", &Menu);
                        if (Menu == 0) {
                            ExitCasos = 1;
                        }
                        if (Menu == 1) {
                            printf("Voce escolheu: SelectionSort");
                            SelectionSort(Aux, Tam);
                        }
                        if (Menu == 2) {
                            printf("Voce escolheu: InsertionSort");
                            InserctionSort(Aux, Tam);
                        }
                        if (Menu == 3) {
                            printf("Voce escolheu: BubbleSort");
                            BubbleSort(Aux, Tam);
                        }
                        if (Menu == 4) {
                            printf("Voce escolheu: ShellSort");
                            ShellSort(Aux, Tam);
                        }
                        if (Menu == 5) {
                            printf("Voce escolheu: QuickSort");
                            QuickSort(Aux, Tam);
                        }
                        if (Menu == 6) {
                            printf("Voce escolheu: HeapSort");
                            HeapSort(Aux, Tam);
                        }
                        if (Menu == 7) {
                            printf("Digite o Indice no vetor da Matriz: ");
                            scanf("%d", &Indice);
                            if (Indice < Tam && Indice >= 0) {
                                Imprime_Matriz_All(&Vetor[Indice]);
                            }
                        }
                    }
                    ExitCasos = 0;
                    fclose(arq);
                }
                    if (strcmp(endarq, "cenario2.txt") == 0) {
                        //Especificações do Cenário
                        printf("Voce escolheu: Cenario 2\n");
                        Tam = 365;
                        preencher = (Tam * 1);
                        NumVoo = 10;
                        //Alocar a Matriz dinamicamente
                        Matriz_voos *Vetor, *Aux;
                        Voo Temporario;
                        inicia_voo(&Temporario);
                        Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        int *V, *Val, auxint;
                        V = (int *) malloc((Tam + 1) * sizeof(int));
                        Val = (int *) malloc((Tam + 1) * sizeof(int));

                        //Definir o ID da Matriz//
                        Random_Vector(V, Tam, 0, Tam + 1);
                        for (i = 0; i < Tam; i++) {
                            Set_Identificador(&Vetor[i], Val[i]);
                        }

                        //INSERINDO OS VOOS NA MATRIZ
                        while (!feof(arq)) { //PARA SOMENTE DEPOIS DE LER O ARQUIVO
                            for (i = 0; i < preencher; i++) {
                                fscanf(arq, "%d", &auxint);
                                Val[i] = auxint;
                            }
                            for (i = 0; i < preencher; i++) {
                                Inicializar_Matriz(&Vetor[i]);
                                for (j = 0; j < NumVoo; j++) {
                                    fscanf(arq, "%s %s %s %s %d", Temporario.hora_decolagem, Temporario.hora_previsao_pouso,
                                           Temporario.aeroporto_decolagem, Temporario.aeroporto_pouso, &Temporario.id_pista_decolagem);
                                    Inserir_Elementos_Matriz(&Vetor[i], Temporario);
                                }
                            }
                        }
                        ExitCasos=0;
                        while (ExitCasos == 0) {
                            for (i = 0; i < Tam; i++) {
                                Aux[i] = Vetor[i];
                            }
                            printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                            printf("1) SelectionSort\n");
                            printf("2) InsertionSort\n");
                            printf("3) BubbleSort\n");
                            printf("4) ShellSort\n");
                            printf("5) QuickSort\n");
                            printf("6) HeapSort\n");
                            printf("7) Exibir Matriz de acordo com indice\n");
                            printf("0) Sair\n");
                            scanf("%d", &Menu);
                            if (Menu == 0) {
                                ExitCasos = 1;
                            }
                            if (Menu == 1) {
                                printf("Voce escolheu: SelectionSort");
                                SelectionSort(Aux, Tam);
                            }
                            if (Menu == 2) {
                                printf("Voce escolheu: InsertionSort");
                                InserctionSort(Aux, Tam);
                            }
                            if (Menu == 3) {
                                printf("Voce escolheu: BubbleSort");
                                BubbleSort(Aux, Tam);
                            }
                            if (Menu == 4) {
                                printf("Voce escolheu: ShellSort");
                                ShellSort(Aux, Tam);
                            }
                            if (Menu == 5) {
                                printf("Voce escolheu: QuickSort");
                                QuickSort(Aux, Tam);
                            }
                            if (Menu == 6) {
                                printf("Voce escolheu: HeapSort");
                                HeapSort(Aux, Tam);
                            }
                            if (Menu == 7) {
                                printf("Digite o Indice no vetor da Matriz: ");
                                scanf("%d", &Indice);
                                if (Indice < Tam && Indice >= 0) {
                                    Imprime_Matriz_All(&Vetor[Indice]);
                                }
                            }
                        }
                    }
                    if (strcmp(endarq, "cenario3.txt") == 0) {
                        //Especificações do Cenário
                        printf("Voce escolheu: Cenario 3\n");
                        Tam = 365;
                        preencher = (Tam * 0.2);
                        NumVoo = 100;
                        //Alocar a Matriz dinamicamente
                        Matriz_voos *Vetor, *Aux;
                        Voo Temporario;
                        inicia_voo(&Temporario);
                        Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        int *V, *Val, auxint;
                        V = (int *) malloc((Tam + 1) * sizeof(int));
                        Val = (int *) malloc((Tam + 1) * sizeof(int));

                        //Definir o ID da Matriz//
                        Random_Vector(V, Tam, 0, Tam + 1);
                        for (i = 0; i < Tam; i++) {
                            Set_Identificador(&Vetor[i], Val[i]);
                        }
                        //INSERINDO OS VOOS NA MATRIZ
                        while (!feof(arq)) { //PARA SOMENTE DEPOIS DE LER O ARQUIVO
                            for (i = 0; i < preencher; i++) {
                                fscanf(arq, "%d", &auxint);
                                Val[i] = auxint;
                            }
                            printf("Inserindo...\n");
                            for (i = 0; i < preencher; i++) {
                                Inicializar_Matriz(&Vetor[i]);
                                for (j = 0; j < NumVoo; j++) {
                                    fscanf(arq, "%s %s %s %s %d", Temporario.hora_decolagem, Temporario.hora_previsao_pouso,
                                           Temporario.aeroporto_decolagem, Temporario.aeroporto_pouso, &Temporario.id_pista_decolagem);
                                    Inserir_Elementos_Matriz(&Vetor[i], Temporario);
                                }
                            }
                        }
                        ExitCasos=0;
                        while (ExitCasos == 0) {
                            for (i = 0; i < Tam; i++) {
                                Aux[i] = Vetor[i];
                            }
                            printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                            printf("1) SelectionSort\n");
                            printf("2) InsertionSort\n");
                            printf("3) BubbleSort\n");
                            printf("4) ShellSort\n");
                            printf("5) QuickSort\n");
                            printf("6) HeapSort\n");
                            printf("7) Exibir Matriz de acordo com indice\n");
                            printf("0) Sair\n");
                            scanf("%d", &Menu);
                            if (Menu == 0) {
                                ExitCasos = 1;
                            }
                            if (Menu == 1) {
                                printf("Voce escolheu: SelectionSort");
                                SelectionSort(Aux, Tam);
                            }
                            if (Menu == 2) {
                                printf("Voce escolheu: InsertionSort");
                                InserctionSort(Aux, Tam);
                            }
                            if (Menu == 3) {
                                printf("Voce escolheu: BubbleSort");
                                BubbleSort(Aux, Tam);
                            }
                            if (Menu == 4) {
                                printf("Voce escolheu: ShellSort");
                                ShellSort(Aux, Tam);
                            }
                            if (Menu == 5) {
                                printf("Voce escolheu: QuickSort");
                                QuickSort(Aux, Tam);
                            }
                            if (Menu == 6) {
                                printf("Voce escolheu: HeapSort");
                                HeapSort(Aux, Tam);
                            }
                            if (Menu == 7) {
                                printf("Digite o Indice no vetor da Matriz: ");
                                scanf("%d", &Indice);
                                if (Indice < Tam && Indice >= 0) {
                                    Imprime_Matriz_All(&Vetor[Indice]);
                                }
                            }
                        }

                    }
                    if (strcmp(endarq, "cenario4.txt") == 0) {
                        //Especificações do Cenário
                        printf("Voce escolheu: Cenario 4\n");
                        Tam = 365;
                        preencher = (Tam * 1);
                        NumVoo = 100;
                        //Alocar a Matriz dinamicamente
                        Matriz_voos *Vetor, *Aux;
                        Voo Temporario;
                        inicia_voo(&Temporario);
                        Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        int *V, *Val, auxint;
                        V = (int *) malloc((Tam + 1) * sizeof(int));
                        Val = (int *) malloc((Tam + 1) * sizeof(int));

                        //Definir o ID da Matriz//
                        Random_Vector(V, Tam, 0, Tam + 1);
                        for (i = 0; i < Tam; i++) {
                            Set_Identificador(&Vetor[i], Val[i]);
                        }
                        //INSERINDO OS VOOS NA MATRIZ
                        while (!feof(arq)) { //PARA SOMENTE DEPOIS DE LER O ARQUIVO
                            for (i = 0; i < preencher; i++) {
                                fscanf(arq, "%d", &auxint);
                                Val[i] = auxint;
                            }
                            for (i = 0; i < preencher; i++) {
                                Inicializar_Matriz(&Vetor[i]);
                                for (j = 0; j < NumVoo; j++) {
                                    fscanf(arq, "%s %s %s %s %d", Temporario.hora_decolagem, Temporario.hora_previsao_pouso,
                                           Temporario.aeroporto_decolagem, Temporario.aeroporto_pouso, &Temporario.id_pista_decolagem);
                                    Inserir_Elementos_Matriz(&Vetor[i], Temporario);
                                }
                            }
                        }
                        ExitCasos=0;
                        while (ExitCasos == 0) {
                            for (i = 0; i < Tam; i++) {
                                Aux[i] = Vetor[i];
                            }
                            printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                            printf("1) SelectionSort\n");
                            printf("2) InsertionSort\n");
                            printf("3) BubbleSort\n");
                            printf("4) ShellSort\n");
                            printf("5) QuickSort\n");
                            printf("6) HeapSort\n");
                            printf("7) Exibir Matriz de acordo com indice\n");
                            printf("0) Sair\n");
                            scanf("%d", &Menu);
                            if (Menu == 0) {
                                ExitCasos = 1;
                            }
                            if (Menu == 1) {
                                printf("Voce escolheu: SelectionSort");
                                SelectionSort(Aux, Tam);
                            }
                            if (Menu == 2) {
                                printf("Voce escolheu: InsertionSort");
                                InserctionSort(Aux, Tam);
                            }
                            if (Menu == 3) {
                                printf("Voce escolheu: BubbleSort");
                                BubbleSort(Aux, Tam);
                            }
                            if (Menu == 4) {
                                printf("Voce escolheu: ShellSort");
                                ShellSort(Aux, Tam);
                            }
                            if (Menu == 5) {
                                printf("Voce escolheu: QuickSort");
                                QuickSort(Aux, Tam);
                            }
                            if (Menu == 6) {
                                printf("Voce escolheu: HeapSort");
                                HeapSort(Aux, Tam);
                            }
                            if (Menu == 7) {
                                printf("Digite o Indice no vetor da Matriz: ");
                                scanf("%d", &Indice);
                                if (Indice < Tam && Indice >= 0) {
                                    Imprime_Matriz_All(&Vetor[Indice]);
                                }
                            }
                        }
                    }
                    if (strcmp(endarq, "cenario5.txt") == 0) {
                        //Especificações do Cenário
                        printf("Voce escolheu: Cenario 5\n");
                        Tam = 3650;
                        preencher = (Tam * 0.2);
                        NumVoo = 10;
                        //Alocar a Matriz dinamicamente
                        Matriz_voos *Vetor, *Aux;
                        Voo Temporario;
                        inicia_voo(&Temporario);
                        Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        int *V, *Val, auxint;
                        V = (int *) malloc((Tam + 1) * sizeof(int));
                        Val = (int *) malloc((Tam + 1) * sizeof(int));

                        //Definir o ID da Matriz//
                        Random_Vector(V, Tam, 0, Tam + 1);
                        for (i = 0; i < Tam; i++) {
                            Set_Identificador(&Vetor[i], Val[i]);
                        }

                        //INSERINDO OS VOOS NA MATRIZ
                        while (!feof(arq)) { //PARA SOMENTE DEPOIS DE LER O ARQUIVO
                            for (i = 0; i < preencher; i++) {
                                fscanf(arq, "%d", &auxint);
                                Val[i] = auxint;
                            }
                            printf("Inserindo...\n");
                            for (i = 0; i < preencher; i++) {
                                Inicializar_Matriz(&Vetor[i]);
                                for (j = 0; j < NumVoo; j++) {
                                    fscanf(arq, "%s %s %s %s %d", Temporario.hora_decolagem, Temporario.hora_previsao_pouso,
                                           Temporario.aeroporto_decolagem, Temporario.aeroporto_pouso, &Temporario.id_pista_decolagem);
                                    Inserir_Elementos_Matriz(&Vetor[i], Temporario);
                                }
                            }
                        }
                        ExitCasos=0;
                        while (ExitCasos == 0) {
                            for (i = 0; i < Tam; i++) {
                                Aux[i] = Vetor[i];
                            }
                            printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                            printf("1) SelectionSort\n");
                            printf("2) InsertionSort\n");
                            printf("3) BubbleSort\n");
                            printf("4) ShellSort\n");
                            printf("5) QuickSort\n");
                            printf("6) HeapSort\n");
                            printf("7) Exibir Matriz de acordo com indice\n");
                            printf("0) Sair\n");
                            scanf("%d", &Menu);
                            if (Menu == 0) {
                                ExitCasos = 1;
                            }
                            if (Menu == 1) {
                                printf("Voce escolheu: SelectionSort");
                                SelectionSort(Aux, Tam);
                            }
                            if (Menu == 2) {
                                printf("Voce escolheu: InsertionSort");
                                InserctionSort(Aux, Tam);
                            }
                            if (Menu == 3) {
                                printf("Voce escolheu: BubbleSort");
                                BubbleSort(Aux, Tam);
                            }
                            if (Menu == 4) {
                                printf("Voce escolheu: ShellSort");
                                ShellSort(Aux, Tam);
                            }
                            if (Menu == 5) {
                                printf("Voce escolheu: QuickSort");
                                QuickSort(Aux, Tam);
                            }
                            if (Menu == 6) {
                                printf("Voce escolheu: HeapSort");
                                HeapSort(Aux, Tam);
                            }
                            if (Menu == 7) {
                                printf("Digite o Indice no vetor da Matriz: ");
                                scanf("%d", &Indice);
                                if (Indice < Tam && Indice >= 0) {
                                    Imprime_Matriz_All(&Vetor[Indice]);
                                }
                            }
                        }
                    }
                    if (strcmp(endarq, "cenario6.txt") == 0) {
                        //Especificações do Cenário
                        printf("Voce escolheu: Cenario 6\n");
                        Tam = 3650;
                        preencher = (Tam * 1);
                        NumVoo = 10;
                        //Alocar a Matriz dinamicamente
                        Matriz_voos *Vetor, *Aux;
                        Voo Temporario;
                        inicia_voo(&Temporario);
                        Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        int *V, *Val, auxint;
                        V = (int *) malloc((Tam + 1) * sizeof(int));
                        Val = (int *) malloc((Tam + 1) * sizeof(int));

                        //Definir o ID da Matriz//
                        Random_Vector(V, Tam, 0, Tam + 1);
                        for (i = 0; i < Tam; i++) {
                            Set_Identificador(&Vetor[i], Val[i]);
                        }

                        //INSERINDO OS VOOS NA MATRIZ
                        while (!feof(arq)) { //PARA SOMENTE DEPOIS DE LER O ARQUIVO
                            for (i = 0; i < preencher; i++) {
                                fscanf(arq, "%d", &auxint);
                                Val[i] = auxint;
                            }
                            for (i = 0; i < preencher; i++) {
                                Inicializar_Matriz(&Vetor[i]);
                                for (j = 0; j < NumVoo; j++) {
                                    fscanf(arq, "%s %s %s %s %d", Temporario.hora_decolagem, Temporario.hora_previsao_pouso,
                                           Temporario.aeroporto_decolagem, Temporario.aeroporto_pouso, &Temporario.id_pista_decolagem);
                                    Inserir_Elementos_Matriz(&Vetor[i], Temporario);
                                }
                            }
                        }
                        ExitCasos=0;
                        while (ExitCasos == 0) {
                            for (i = 0; i < Tam; i++) {
                                Aux[i] = Vetor[i];
                            }
                            printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                            printf("1) SelectionSort\n");
                            printf("2) InsertionSort\n");
                            printf("3) BubbleSort\n");
                            printf("4) ShellSort\n");
                            printf("5) QuickSort\n");
                            printf("6) HeapSort\n");
                            printf("7) Exibir Matriz de acordo com indice\n");
                            printf("0) Sair\n");
                            scanf("%d", &Menu);
                            if (Menu == 0) {
                                ExitCasos = 1;
                            }
                            if (Menu == 1) {
                                printf("Voce escolheu: SelectionSort");
                                SelectionSort(Aux, Tam);
                            }
                            if (Menu == 2) {
                                printf("Voce escolheu: InsertionSort");
                                InserctionSort(Aux, Tam);
                            }
                            if (Menu == 3) {
                                printf("Voce escolheu: BubbleSort");
                                BubbleSort(Aux, Tam);
                            }
                            if (Menu == 4) {
                                printf("Voce escolheu: ShellSort");
                                ShellSort(Aux, Tam);
                            }
                            if (Menu == 5) {
                                printf("Voce escolheu: QuickSort");
                                QuickSort(Aux, Tam);
                            }
                            if (Menu == 6) {
                                printf("Voce escolheu: HeapSort");
                                HeapSort(Aux, Tam);
                            }
                            if (Menu == 7) {
                                printf("Digite o Indice no vetor da Matriz: ");
                                scanf("%d", &Indice);
                                if (Indice < Tam && Indice >= 0) {
                                    Imprime_Matriz_All(&Vetor[Indice]);
                                }
                            }
                        }

                    }
                    if (strcmp(endarq, "cenario7.txt") == 0) {
                        //Especificações do Cenário
                        printf("Voce escolheu: Cenario 7\n");
                        Tam = 3650;
                        preencher = (Tam * 0.2);
                        NumVoo = 100;
                        //Alocar a Matriz dinamicamente
                        Matriz_voos *Vetor, *Aux;
                        Voo Temporario;
                        inicia_voo(&Temporario);
                        Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        int *V, *Val, auxint;
                        V = (int *) malloc((Tam + 1) * sizeof(int));
                        Val = (int *) malloc((Tam + 1) * sizeof(int));

                        //Definir o ID da Matriz//
                        Random_Vector(V, Tam, 0, Tam + 1);
                        for (i = 0; i < Tam; i++) {
                            Set_Identificador(&Vetor[i], Val[i]);
                        }

                        //INSERINDO OS VOOS NA MATRIZ
                        while (!feof(arq)) { //PARA SOMENTE DEPOIS DE LER O ARQUIVO
                            for (i = 0; i < preencher; i++) {
                                fscanf(arq, "%d", &auxint);
                                Val[i] = auxint;
                            }
                            for (i = 0; i < preencher; i++) {
                                Inicializar_Matriz(&Vetor[i]);
                                for (j = 0; j < NumVoo; j++) {
                                    fscanf(arq, "%s %s %s %s %d", Temporario.hora_decolagem, Temporario.hora_previsao_pouso,
                                           Temporario.aeroporto_decolagem, Temporario.aeroporto_pouso, &Temporario.id_pista_decolagem);
                                    Inserir_Elementos_Matriz(&Vetor[i], Temporario);
                                }
                            }
                        }
                        ExitCasos=0;
                        while (ExitCasos == 0) {
                            for (i = 0; i < Tam; i++) {
                                Aux[i] = Vetor[i];
                            }
                            printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                            printf("1) SelectionSort\n");
                            printf("2) InsertionSort\n");
                            printf("3) BubbleSort\n");
                            printf("4) ShellSort\n");
                            printf("5) QuickSort\n");
                            printf("6) HeapSort\n");
                            printf("7) Exibir Matriz de acordo com indice\n");
                            printf("0) Sair\n");
                            scanf("%d", &Menu);
                            if (Menu == 0) {
                                ExitCasos = 1;
                            }
                            if (Menu == 1) {
                                printf("Voce escolheu: SelectionSort");
                                SelectionSort(Aux, Tam);
                            }
                            if (Menu == 2) {
                                printf("Voce escolheu: InsertionSort");
                                InserctionSort(Aux, Tam);
                            }
                            if (Menu == 3) {
                                printf("Voce escolheu: BubbleSort");
                                BubbleSort(Aux, Tam);
                            }
                            if (Menu == 4) {
                                printf("Voce escolheu: ShellSort");
                                ShellSort(Aux, Tam);
                            }
                            if (Menu == 5) {
                                printf("Voce escolheu: QuickSort");
                                QuickSort(Aux, Tam);
                            }
                            if (Menu == 6) {
                                printf("Voce escolheu: HeapSort");
                                HeapSort(Aux, Tam);
                            }
                            if (Menu == 7) {
                                printf("Digite o Indice no vetor da Matriz: ");
                                scanf("%d", &Indice);
                                if (Indice < Tam && Indice >= 0) {
                                    Imprime_Matriz_All(&Vetor[Indice]);
                                }
                            }
                        }

                    }
                    if (strcmp(endarq, "cenario8.txt") == 0) {
                        //Especificações do Cenário
                        printf("Voce escolheu: Cenario 8\n");
                        Tam = 3650;
                        preencher = (Tam * 1);
                        NumVoo = 100;
                        //Alocar a Matriz dinamicamente
                        Matriz_voos *Vetor, *Aux;
                        Voo Temporario;
                        inicia_voo(&Temporario);
                        Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        int *V, *Val, auxint;
                        V = (int *) malloc((Tam + 1) * sizeof(int));
                        Val = (int *) malloc((Tam + 1) * sizeof(int));

                        //Definir o ID da Matriz//
                        Random_Vector(V, Tam, 0, Tam + 1);
                        for (i = 0; i < Tam; i++) {
                            Set_Identificador(&Vetor[i], Val[i]);
                        }

                        //INSERINDO OS VOOS NA MATRIZ
                        while (!feof(arq)) { //PARA SOMENTE DEPOIS DE LER O ARQUIVO
                            for (i = 0; i < preencher; i++) {
                                fscanf(arq, "%d", &auxint);
                                Val[i] = auxint;
                            }
                            printf("Inserindo...\n");
                            for (i = 0; i < preencher; i++) {
                                Inicializar_Matriz(&Vetor[i]);
                                for (j = 0; j < NumVoo; j++) {
                                    fscanf(arq, "%s %s %s %s %d", Temporario.hora_decolagem, Temporario.hora_previsao_pouso,
                                           Temporario.aeroporto_decolagem, Temporario.aeroporto_pouso, &Temporario.id_pista_decolagem);
                                    Inserir_Elementos_Matriz(&Vetor[i], Temporario);
                                }
                            }
                        }
                        ExitCasos=0;
                        while (ExitCasos == 0) {
                            for (i = 0; i < Tam; i++) {
                                Aux[i] = Vetor[i];
                            }
                            printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                            printf("1) SelectionSort\n");
                            printf("2) InsertionSort\n");
                            printf("3) BubbleSort\n");
                            printf("4) ShellSort\n");
                            printf("5) QuickSort\n");
                            printf("6) HeapSort\n");
                            printf("7) Exibir Matriz de acordo com indice\n");
                            printf("0) Sair\n");
                            scanf("%d", &Menu);
                            if (Menu == 0) {
                                ExitCasos = 1;
                            }
                            if (Menu == 1) {
                                printf("Voce escolheu: SelectionSort");
                                SelectionSort(Aux, Tam);
                            }
                            if (Menu == 2) {
                                printf("Voce escolheu: InsertionSort");
                                InserctionSort(Aux, Tam);
                            }
                            if (Menu == 3) {
                                printf("Voce escolheu: BubbleSort");
                                BubbleSort(Aux, Tam);
                            }
                            if (Menu == 4) {
                                printf("Voce escolheu: ShellSort");
                                ShellSort(Aux, Tam);
                            }
                            if (Menu == 5) {
                                printf("Voce escolheu: QuickSort");
                                QuickSort(Aux, Tam);
                            }
                            if (Menu == 6) {
                                printf("Voce escolheu: HeapSort");
                                HeapSort(Aux, Tam);
                            }
                            if (Menu == 7) {
                                printf("Digite o Indice no vetor da Matriz: ");
                                scanf("%d", &Indice);
                                if (Indice < Tam && Indice >= 0) {
                                    Imprime_Matriz_All(&Vetor[Indice]);
                                }
                            }
                        }

                    }
                    if (strcmp(endarq, "cenario9.txt") == 0) {
                        //Especificações do Cenário
                        printf("Voce escolheu: Cenario 9\n");
                        Tam = 36500;
                        preencher = (Tam * 0.2);
                        NumVoo = 10;
                        //Alocar a Matriz dinamicamente
                        Matriz_voos *Vetor, *Aux;
                        Voo Temporario;
                        inicia_voo(&Temporario);
                        Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        int *V, *Val, auxint;
                        V = (int *) malloc((Tam + 1) * sizeof(int));
                        Val = (int *) malloc((Tam + 1) * sizeof(int));

                        //Definir o ID da Matriz//
                        Random_Vector(V, Tam, 0, Tam + 1);
                        for (i = 0; i < Tam; i++) {
                            Set_Identificador(&Vetor[i], Val[i]);
                        }

                        //INSERINDO OS VOOS NA MATRIZ
                        while (!feof(arq)) { //PARA SOMENTE DEPOIS DE LER O ARQUIVO
                            for (i = 0; i < preencher; i++) {
                                fscanf(arq, "%d", &auxint);
                                Val[i] = auxint;
                            }
                            printf("Inserindo...\n");
                            for (i = 0; i < preencher; i++) {
                                Inicializar_Matriz(&Vetor[i]);
                                for (j = 0; j < NumVoo; j++) {
                                    fscanf(arq, "%s %s %s %s %d", Temporario.hora_decolagem, Temporario.hora_previsao_pouso,
                                           Temporario.aeroporto_decolagem, Temporario.aeroporto_pouso, &Temporario.id_pista_decolagem);
                                    Inserir_Elementos_Matriz(&Vetor[i], Temporario);
                                }
                            }
                        }
                        ExitCasos=0;
                        while (ExitCasos == 0) {
                            for (i = 0; i < Tam; i++) {
                                Aux[i] = Vetor[i];
                            }
                            printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                            printf("1) SelectionSort\n");
                            printf("2) InsertionSort\n");
                            printf("3) BubbleSort\n");
                            printf("4) ShellSort\n");
                            printf("5) QuickSort\n");
                            printf("6) HeapSort\n");
                            printf("7) Exibir Matriz de acordo com indice\n");
                            printf("0) Sair\n");
                            scanf("%d", &Menu);
                            if (Menu == 0) {
                                ExitCasos = 1;
                            }
                            if (Menu == 1) {
                                printf("Voce escolheu: SelectionSort");
                                SelectionSort(Aux, Tam);
                            }
                            if (Menu == 2) {
                                printf("Voce escolheu: InsertionSort");
                                InserctionSort(Aux, Tam);
                            }
                            if (Menu == 3) {
                                printf("Voce escolheu: BubbleSort");
                                BubbleSort(Aux, Tam);
                            }
                            if (Menu == 4) {
                                printf("Voce escolheu: ShellSort");
                                ShellSort(Aux, Tam);
                            }
                            if (Menu == 5) {
                                printf("Voce escolheu: QuickSort");
                                QuickSort(Aux, Tam);
                            }
                            if (Menu == 6) {
                                printf("Voce escolheu: HeapSort");
                                HeapSort(Aux, Tam);
                            }
                            if (Menu == 7) {
                                printf("Digite o Indice no vetor da Matriz: ");
                                scanf("%d", &Indice);
                                if (Indice < Tam && Indice >= 0) {
                                    Imprime_Matriz_All(&Vetor[Indice]);
                                }
                            }
                        }

                    }
                    if (strcmp(endarq, "cenario10.txt") == 0) {
                        //Especificações do Cenário
                        printf("Voce escolheu: Cenario 10\n");
                        Tam = 36500;
                        preencher = (Tam * 1);
                        NumVoo = 10;
                        //Alocar a Matriz dinamicamente
                        Matriz_voos *Vetor, *Aux;
                        Voo Temporario;
                        inicia_voo(&Temporario);
                        Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        int *V, *Val, auxint;
                        V = (int *) malloc((Tam + 1) * sizeof(int));
                        Val = (int *) malloc((Tam + 1) * sizeof(int));

                        //Definir o ID da Matriz//
                        Random_Vector(V, Tam, 0, Tam + 1);
                        for (i = 0; i < Tam; i++) {
                            Set_Identificador(&Vetor[i], Val[i]);
                        }
                        //INSERINDO OS VOOS NA MATRIZ
                        while (!feof(arq)) { //PARA SOMENTE DEPOIS DE LER O ARQUIVO
                            for (i = 0; i < preencher; i++) {
                                fscanf(arq, "%d", &auxint);
                                Val[i] = auxint;
                            }
                            printf("Inserindo...\n");
                            for (i = 0; i < preencher; i++) {
                                Inicializar_Matriz(&Vetor[i]);
                                for (j = 0; j < NumVoo; j++) {
                                    fscanf(arq, "%s %s %s %s %d", Temporario.hora_decolagem, Temporario.hora_previsao_pouso,
                                           Temporario.aeroporto_decolagem, Temporario.aeroporto_pouso, &Temporario.id_pista_decolagem);
                                    Inserir_Elementos_Matriz(&Vetor[i], Temporario);
                                }
                            }
                        }
                        ExitCasos=0;
                        while (ExitCasos == 0) {
                            for (i = 0; i < Tam; i++) {
                                Aux[i] = Vetor[i];
                            }
                            printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                            printf("1) SelectionSort\n");
                            printf("2) InsertionSort\n");
                            printf("3) BubbleSort\n");
                            printf("4) ShellSort\n");
                            printf("5) QuickSort\n");
                            printf("6) HeapSort\n");
                            printf("7) Exibir Matriz de acordo com indice\n");
                            printf("0) Sair\n");
                            scanf("%d", &Menu);
                            if (Menu == 0) {
                                ExitCasos = 1;
                            }
                            if (Menu == 1) {
                                printf("Voce escolheu: SelectionSort");
                                SelectionSort(Aux, Tam);
                            }
                            if (Menu == 2) {
                                printf("Voce escolheu: InsertionSort");
                                InserctionSort(Aux, Tam);
                            }
                            if (Menu == 3) {
                                printf("Voce escolheu: BubbleSort");
                                BubbleSort(Aux, Tam);
                            }
                            if (Menu == 4) {
                                printf("Voce escolheu: ShellSort");
                                ShellSort(Aux, Tam);
                            }
                            if (Menu == 5) {
                                printf("Voce escolheu: QuickSort");
                                QuickSort(Aux, Tam);
                            }
                            if (Menu == 6) {
                                printf("Voce escolheu: HeapSort");
                                HeapSort(Aux, Tam);
                            }
                            if (Menu == 7) {
                                printf("Digite o Indice no vetor da Matriz: ");
                                scanf("%d", &Indice);
                                if (Indice < Tam && Indice >= 0) {
                                    Imprime_Matriz_All(&Vetor[Indice]);
                                }
                            }
                        }
                    }
                    if (strcmp(endarq, "cenario11.txt") == 0) {
                        //Especificações do Cenário
                        printf("Voce escolheu: Cenario 11\n");
                        Tam = 36500;
                        preencher = (Tam * 0.2);
                        NumVoo = 100;
                        //Alocar a Matriz dinamicamente
                        Matriz_voos *Vetor, *Aux;
                        Voo Temporario;
                        inicia_voo(&Temporario);
                        Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        int *V, *Val, auxint;
                        V = (int *) malloc((Tam + 1) * sizeof(int));
                        Val = (int *) malloc((Tam + 1) * sizeof(int));

                        //Definir o ID da Matriz//
                        Random_Vector(V, Tam, 0, Tam + 1);
                        for (i = 0; i < Tam; i++) {
                            Set_Identificador(&Vetor[i], Val[i]);
                        }
                        //INSERINDO OS VOOS NA MATRIZ
                        while (!feof(arq)) { //PARA SOMENTE DEPOIS DE LER O ARQUIVO
                            for (i = 0; i < preencher; i++) {
                                fscanf(arq, "%d", &auxint);
                                Val[i] = auxint;
                            }
                            printf("Inserindo...\n");
                            for (i = 0; i < preencher; i++) {
                                Inicializar_Matriz(&Vetor[i]);
                                for (j = 0; j < NumVoo; j++) {
                                    fscanf(arq, "%s %s %s %s %d", Temporario.hora_decolagem, Temporario.hora_previsao_pouso,
                                           Temporario.aeroporto_decolagem, Temporario.aeroporto_pouso, &Temporario.id_pista_decolagem);
                                    Inserir_Elementos_Matriz(&Vetor[i], Temporario);
                                }
                            }
                        }
                        ExitCasos=0;
                        while (ExitCasos == 0) {
                            for (i = 0; i < Tam; i++) {
                                Aux[i] = Vetor[i];
                            }
                            printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                            printf("1) SelectionSort\n");
                            printf("2) InsertionSort\n");
                            printf("3) BubbleSort\n");
                            printf("4) ShellSort\n");
                            printf("5) QuickSort\n");
                            printf("6) HeapSort\n");
                            printf("7) Exibir Matriz de acordo com indice\n");
                            printf("0) Sair\n");
                            scanf("%d", &Menu);
                            if (Menu == 0) {
                                ExitCasos = 1;
                            }
                            if (Menu == 1) {
                                printf("Voce escolheu: SelectionSort");
                                SelectionSort(Aux, Tam);
                            }
                            if (Menu == 2) {
                                printf("Voce escolheu: InsertionSort");
                                InserctionSort(Aux, Tam);
                            }
                            if (Menu == 3) {
                                printf("Voce escolheu: BubbleSort");
                                BubbleSort(Aux, Tam);
                            }
                            if (Menu == 4) {
                                printf("Voce escolheu: ShellSort");
                                ShellSort(Aux, Tam);
                            }
                            if (Menu == 5) {
                                printf("Voce escolheu: QuickSort");
                                QuickSort(Aux, Tam);
                            }
                            if (Menu == 6) {
                                printf("Voce escolheu: HeapSort");
                                HeapSort(Aux, Tam);
                            }
                            if (Menu == 7) {
                                printf("Digite o Indice no vetor da Matriz: ");
                                scanf("%d", &Indice);
                                if (Indice < Tam && Indice >= 0) {
                                    Imprime_Matriz_All(&Vetor[Indice]);
                                }
                            }
                        }
                    }
                    if (strcmp(endarq, "cenario12.txt") == 0) {
                        //Especificações do Cenário
                        printf("Voce escolheu: Cenario 12\n");
                        Tam = 365;
                        preencher = (Tam * 1);
                        NumVoo = 100;
                        //Alocar a Matriz dinamicamente
                        Matriz_voos *Vetor, *Aux;
                        Voo Temporario;
                        inicia_voo(&Temporario);
                        Vetor = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        Aux = (Matriz_voos *) malloc((Tam + 1) * sizeof(Matriz_voos));
                        int *V, *Val, auxint;
                        V = (int *) malloc((Tam + 1) * sizeof(int));
                        Val = (int *) malloc((Tam + 1) * sizeof(int));

                        //Definir o ID da Matriz//
                        Random_Vector(V, Tam, 0, Tam + 1);
                        for (i = 0; i < Tam; i++) {
                            Set_Identificador(&Vetor[i], Val[i]);
                        }

                        //INSERINDO OS VOOS NA MATRIZ
                        while (!feof(arq)) { //PARA SOMENTE DEPOIS DE LER O ARQUIVO
                            for (i = 0; i < preencher; i++) {
                                fscanf(arq, "%d", &auxint);
                                Val[i] = auxint;
                            }
                            printf("Inserindo...\n");
                            for (i = 0; i < preencher; i++) {
                                Inicializar_Matriz(&Vetor[i]);
                                for (j = 0; j < NumVoo; j++) {
                                    fscanf(arq, "%s %s %s %s %d", Temporario.hora_decolagem, Temporario.hora_previsao_pouso,
                                           Temporario.aeroporto_decolagem, Temporario.aeroporto_pouso, &Temporario.id_pista_decolagem);
                                    Inserir_Elementos_Matriz(&Vetor[i], Temporario);
                                }
                            }
                        }
                        ExitCasos=0;
                        while (ExitCasos == 0) {
                            for (i = 0; i < Tam; i++) {
                                Aux[i] = Vetor[i];
                            }
                            printf("Escolha com qual algoritmo de ordenacao deseja testar:\n");
                            printf("1) SelectionSort\n");
                            printf("2) InsertionSort\n");
                            printf("3) BubbleSort\n");
                            printf("4) ShellSort\n");
                            printf("5) QuickSort\n");
                            printf("6) HeapSort\n");
                            printf("7) Exibir Matriz de acordo com indice\n");
                            printf("0) Sair\n");
                            scanf("%d", &Menu);
                            if (Menu == 0) {
                                ExitCasos = 1;
                            }
                            if (Menu == 1) {
                                printf("Voce escolheu: SelectionSort");
                                SelectionSort(Aux, Tam);
                            }
                            if (Menu == 2) {
                                printf("Voce escolheu: InsertionSort");
                                InserctionSort(Aux, Tam);
                            }
                            if (Menu == 3) {
                                printf("Voce escolheu: BubbleSort");
                                BubbleSort(Aux, Tam);
                            }
                            if (Menu == 4) {
                                printf("Voce escolheu: ShellSort");
                                ShellSort(Aux, Tam);
                            }
                            if (Menu == 5) {
                                printf("Voce escolheu: QuickSort");
                                QuickSort(Aux, Tam);
                            }
                            if (Menu == 6) {
                                printf("Voce escolheu: HeapSort");
                                HeapSort(Aux, Tam);
                            }
                            if (Menu == 7) {
                                printf("Digite o Indice no vetor da Matriz: ");
                                scanf("%d", &Indice);
                                if (Indice < Tam && Indice >= 0) {
                                    Imprime_Matriz_All(&Vetor[Indice]);
                                }
                            }
                        }
                    }
                }
            }
         else if (Menu == 3) {
            printf("Obrigado por utilizar o nosso codigo! \n");
            Exit = 1;
        } else {
            printf("Digite novamente um numero valido\n");
        }
    }
}




/*
//Teste de criação de voos//

Inicia_Random();
Voo voo;
Lista_De_Voos lista;
Voo_Random(&voo);
nova_lista_voos(&lista);
inserir_lista_voo(&lista,voo);
imprime_lista_voo(lista);



//Criação do vetor de Matrizes//
int i,NumMatrizes=10,j;
Inicia_Random();
Matriz_voos Vetor[NumMatrizes];
int identificador[NumMatrizes];
printf("\nDesordenados:\n");
Random_Vector(identificador,NumMatrizes,0,NumMatrizes*10);
for(i=0;i<NumMatrizes;i++){
printf("%d ",identificador[i]);
}
printf("\n");

for(i=0;i<NumMatrizes;i++){
Inicializar_Matriz(&Vetor[i]);
Vetor[i].identificador=identificador[i];
printf("Matriz %d: %d\n",i,Vetor[i].identificador);
}
for(j=0;j<10;j++) {
for (i = 0; i < 10; i++) {
Inserir_Elementos_Matriz(&Vetor[j], Voo_Random());
}
}





//Algoritmos de ordenação//

//SelectionSort(Vetor,NumMatrizes-1);

//InserctionSort(Vetor,NumMatrizes-1);

//BubbleSort(Vetor,NumMatrizes-1);

//ShellSort(Vetor,NumMatrizes-1);

//QuickSort(Vetor,NumMatrizes-1);

//HeapSort(Vetor,NumMatrizes);

printf("\nOrdenados:\n");
for(i=0;i<NumMatrizes;i++){
    printf("Matriz %d: %d\n",i,Vetor[i].identificador);
}
*/
