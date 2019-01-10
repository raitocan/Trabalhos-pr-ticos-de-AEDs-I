//
// Created by Athos on 27/11/2018.
//

#include "Ordena.h"

void SelectionSort(Matriz_voos *Item, int Elementos){
    int troca=0,comp=0;
    Timer Tempo;
    TimerIniciar(&Tempo);
    Matriz_voos Aux;
    int i,j,Min;
    for (i=0;i<=Elementos-1;i++){
        Min=i;
        for(j=i+1;j<=Elementos;j++){
            comp++;
            if(Item[j].identificador < Item[Min].identificador){
                Min=j;
            }}

            Aux=Item[Min];
            Item[Min]=Item[i];
            Item[i]=Aux;
            troca++;

    }
    TimerParar(&Tempo);
    printf("Algoritmo: SelectionSort\n");
    printf("Numero de movimentacoes: %d\n",troca);
    printf("Numero de comparacoes: %d\n",comp);
    printf("Tempo de execucao: %lf\n",TimerTempoTotal(Tempo));

}

void InserctionSort(Matriz_voos *Item, int Elementos){
    int i,j;
    int troca=0,comp=0;
    Timer Tempo;
    TimerIniciar(&Tempo);
    Matriz_voos Aux;
    for(i=1;i<=Elementos;i++){
        Aux = Item[i];
        j=i-1;
        while((++comp) && j >=0 && Item[j].identificador > Aux.identificador){
            Item[j+1] = Item[j];
            troca++;
            j--;
        }
        Item[j+1] = Aux;
        troca++;
    }
    TimerParar(&Tempo);
    printf("Algoritmo: InsertionSort\n");
    printf("Numero de movimentacoes: %d\n",troca);
    printf("Numero de comparacoes: %d\n",comp);
    printf("Tempo de execucao: %lf\n",TimerTempoTotal(Tempo));
}

void BubbleSort(Matriz_voos *Item, int Elementos){
    int i,j;
    int troca=0,comp=0;
    Timer Tempo;
    TimerIniciar(&Tempo);
    Matriz_voos Aux;
    for(i=1;i<Elementos;i++){
        for(j=0;j<Elementos;j++){
            comp++;
            if(Item[j].identificador>Item[j+1].identificador) {
                Aux = Item[j];
                Item[j] = Item[j + 1];
                Item[j + 1] = Aux;
                troca=troca+1;
            }
        }
    }
    TimerParar(&Tempo);
    printf("Algoritmo: BubbleSort\n");
    printf("Numero de movimentacoes: %d\n",troca);
    printf("Numero de comparacoes: %d\n",comp);
    printf("Tempo de execucao: %lf\n",TimerTempoTotal(Tempo));
}

void ShellSort(Matriz_voos *Item, int Elementos){
    int i,j;
    int troca=0,comp=0;
    int h=1;
    Timer Tempo;
    TimerIniciar(&Tempo);
    Matriz_voos Aux;
    do h=h*3+1;
    while(h<Elementos);
    do{
        h /= 3;
        for(i=h;i<=Elementos;i++) {
            Aux = Item[i];
            j = i;
            while ((++comp) && Item[j - h].identificador > Aux.identificador) {
                troca++;
                Item[j] = Item[j - h];
                j -= h;
                if (j <= h) break;
            }
            Item[j] = Aux; troca++;
        }
    } while(h!=1);
    TimerParar(&Tempo);
    printf("Algoritmo: ShellSort\n");
    printf("Numero de movimentacoes: %d\n",troca);
    printf("Numero de comparacoes: %d\n",comp);
    printf("Tempo de execucao: %lf\n",TimerTempoTotal(Tempo));
}

void QuickSort(Matriz_voos *Item, int Elementos){
    Timer Tempo;
    int troca=0,comp=0;
    TimerIniciar(&Tempo);
    Quick_Ordena(0,Elementos,Item,&troca,&comp);

    TimerParar(&Tempo);
    printf("Algoritmo: Quicksort\n");
    printf("Numero de trocas: %d\n",troca);
    printf("Numero de comparacoes: %d\n",comp);
    printf("Tempo de execucao: %lf\n",TimerTempoTotal(Tempo));
}
void Quick_Ordena(int Esq, int Dir, Matriz_voos *Item, int *t, int *c){
    int i,j;
    Quick_Particiona(Esq,Dir, &i,&j,Item,t,c);
    *c=*c+1;
    if(Esq<j) Quick_Ordena(Esq,j,Item,t,c);
    *c=*c+1;
    if(i<Dir) Quick_Ordena(i,Dir,Item,t,c);
}
void Quick_Particiona(int Esq,int Dir,int *i,int *j,Matriz_voos *Item,int *t, int *c){
    Matriz_voos pivo,w;
    *i = Esq;
    *j = Dir;
    pivo=Item[(*i+*j)/2];
    do{
        while((*c=*c+1) && pivo.identificador > Item[*i].identificador) {
            (*i)++;
        }
        while((*c=*c+1) && pivo.identificador < Item[*j].identificador){
            (*j)--;
        }
        if(*i<=*j){
            w = Item[*i];
            Item[*i]=Item[*j];
            Item[*j] = w;
            *t=*t+1;
            (*i)++;
            (*j)--;
        }
    }while(*i <= *j);
}

void HeapSort(Matriz_voos *Item, int Elementos){
    int i,pai,filho;
    Timer Tempo;
    int troca=0,comp=0;
    TimerIniciar(&Tempo);
    Matriz_voos aux;
    i=Elementos/2;
    while(1){
        if(i>0){
            i--;
            aux=Item[i];
        } else {
            Elementos--;
            if(Elementos==0) {
                TimerParar(&Tempo);
                printf("Algoritmo: HeapSort\n");
                printf("Numero de trocas: %d\n",troca);
                printf("Numero de comparacoes: %d\n",comp);
                printf("Tempo de execucao: %lf\n",TimerTempoTotal(Tempo));
                return;
            }
            aux = Item[Elementos];
            Item[Elementos] = Item[0];
            troca++;
        }
        pai=i;
        filho=i*2+1;
        while(filho<Elementos){
            if((filho+1<Elementos) && (++comp) && (Item[filho+1].identificador > Item[filho].identificador)){
                filho++;
            }
            if((++comp) && Item[filho].identificador > aux.identificador){
                Item[pai] = Item[filho];
                pai = filho;
                filho = pai*2+1;
                troca++;
            } else{
                break;
            }
        }
        troca++;
        Item[pai]=aux;
    }

}


void ParticaoA(int Esq, int Dir,int *i, int *j, Matriz_voos *A,int *compara,int *mov){
    Matriz_voos x,w;
    *i = Esq;  *j = Dir;
    x = A[(*i + *j) / 2]; /* obtem o pivo x */
    do
    {

        while (x.identificador > A[*i].identificador) {
            (*i)++;
            *compara = *compara + 1;
        }
        while (x.identificador < A[*j].identificador){
            *compara = *compara + 1;
            (*j)--;
        }

        if (*i <= *j)
        {
            *mov = *mov+1;
            w = A[*i];
            A[*i] = A[*j];
            A[*j] = w;
            (*i)++; (*j)--;
        }
    } while (*i <= *j);
}

void OrdenaA(int Esq, int Dir, Matriz_voos *A,int *compara,int *mov){
    int i, j;
    ParticaoA(Esq, Dir, &i, &j, A,compara,mov);

    *compara = *compara + 1;
    if (Esq < j) OrdenaA(Esq, j, A,compara,mov);
    *compara = *compara + 1;
    if (i < Dir) OrdenaA(i, Dir, A,compara,mov);

}

void QuickSortA(Matriz_voos *A, int n){
    n=n-1;
    int compara =0;
    int mov =0;
    OrdenaA(1, n, A,&compara,&mov);
    printf("Comparacoes %d\n", compara);
    printf("Movimentacoes %d\n", mov);
}
