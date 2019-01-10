//
// Created by tais on 31/08/18.
//
#include "voo.h"

//Defina o tipo Celula da Lista de Voos//
typedef struct celLista {
    Voo item_voo;
    struct celLista *prox;
}CelLista_De_Voos;

//Define o tipo Lista de Voos//
typedef struct{
    CelLista_De_Voos *primeiro;
    CelLista_De_Voos *ultimo;
}Lista_De_Voos;


void nova_lista_voos(Lista_De_Voos *lista);
int verifica_lista_vazia(Lista_De_Voos *lista);
void inserir_lista_voo(Lista_De_Voos *lista, Voo voo);
int remover_lista_voo(Lista_De_Voos *lista, int id);
void imprime_lista_voo(Lista_De_Voos Lista);
Voo* procura_lista_voo(Lista_De_Voos *Lista, int id );
