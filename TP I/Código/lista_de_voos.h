//
// Created by tais on 31/08/18.
//
#include "voo.h"

typedef struct{
    Voo item_voo;
    struct CelLista_De_Voos *prox;
}CelLista_De_Voos;

typedef struct{
    CelLista_De_Voos *primeiro;
    CelLista_De_Voos *ultimo;
}Lista_De_Voos;


void nova_lista_voos(Lista_De_Voos *lista);
int verifica_lista_vazia(Lista_De_Voos *lista);
void inserir_lista_voo(Lista_De_Voos *lista, Voo voo);
void remover_lista_voo(CelLista_De_Voos *ponteiro, Lista_De_Voos *lista, Voo *voo );
void imprime_lista_voo(Lista_De_Voos Lista);
Voo* procura_lista_voo(Lista_De_Voos *Lista, int id );
