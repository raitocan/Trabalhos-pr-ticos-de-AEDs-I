//
// Created by Athos on 27/11/2018.
//
#include "random.h"
#include "Tempo.h"
/*

 */
//Algoritmos de Ordenação Simples//
void SelectionSort(Matriz_voos *Item, int Elementos);
void InserctionSort(Matriz_voos *Item, int Elementos);
void BubbleSort(Matriz_voos *Item, int Elementos);

//Algoritmos Complexos//
void ShellSort(Matriz_voos *Item, int Elementos);

//Elementos do Quicksort//
void QuickSort(Matriz_voos *Item, int Elementos);
void Quick_Ordena(int Esq, int Dir, Matriz_voos *Item, int *t, int *c);
void Quick_Particiona(int Esq,int Dir,int *i,int *j,Matriz_voos *Item,int *t, int *c);

//Elementos do Heap//
void HeapSort(Matriz_voos *Item, int Elementos);

void ParticaoA(int Esq, int Dir,int *i, int *j, Matriz_voos *A,int *compara,int *mov);
void OrdenaA(int Esq, int Dir, Matriz_voos *A,int *compara,int *mov);
void QuickSortA(Matriz_voos *A, int n);
