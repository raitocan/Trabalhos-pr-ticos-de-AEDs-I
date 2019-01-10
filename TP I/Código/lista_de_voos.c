//
// Created by tais on 31/08/18.
//

#include "lista_de_voos.h"


void nova_lista_voos(Lista_De_Voos *lista){

    lista->primeiro = (CelLista_De_Voos*)malloc(sizeof(CelLista_De_Voos));
    lista->ultimo=lista->primeiro;
    lista->primeiro->prox=NULL;
}

int verifica_lista_vazia(Lista_De_Voos *lista ){
    return (lista->primeiro->prox==NULL);
}

void inserir_lista_voo(Lista_De_Voos *lista, Voo voo){
    CelLista_De_Voos *atual, *proximo, *novo;
    novo=(CelLista_De_Voos*) malloc(sizeof(CelLista_De_Voos));
    novo->item_voo=voo;
    atual=lista->primeiro;
    proximo=lista->primeiro->prox;
    while(proximo!=NULL){
        if(strcmp(proximo->item_voo.hora_decolagem,voo.hora_decolagem)>=0){
            printf("Inserir completo");
            break;
        }
        atual=proximo;
        proximo=proximo->prox;
    }
    novo->prox=proximo;
    atual->prox=novo;
}


void remover_lista_voo(CelLista_De_Voos *ponteiro, Lista_De_Voos *lista, Voo *voo ){
    CelLista_De_Voos *auxiliar;
    if(verifica_lista_vazia(&lista)== 0){
        printf ("lista esta vazia\n");
        return;
    }
    auxiliar = ponteiro->prox;
    *voo = auxiliar->item_voo;
    ponteiro->prox = auxiliar->prox;
    if (ponteiro->prox==NULL){
        lista->ultimo=ponteiro;
    }
    free(auxiliar);
}


Voo* procura_lista_voo(Lista_De_Voos *Lista, int id ){
    CelLista_De_Voos *auxiliar;
    auxiliar = Lista->primeiro->prox;
    while(auxiliar!=NULL){
        if(id==auxiliar->item_voo.id_voo) {
            printf("Voo encontrado.\n");
            return &auxiliar->item_voo;
        }
        else{
            auxiliar = auxiliar->prox;
        }
    }
    printf("Erro: ID desconhecido.\n");

}

void imprime_lista_voo(Lista_De_Voos Lista){
    CelLista_De_Voos *auxiliar;
    auxiliar=Lista.primeiro->prox;
        while(auxiliar!=NULL){
            printf("\n--------------------------------\n");
            print_voo(&auxiliar->item_voo);
            auxiliar= auxiliar->prox;
        }
    printf("\n--------------------------------\n");
}


/*
void inserir_lista_voo(Lista_De_Voos **lista, Voo *voo){
    CelLista_De_Voos *atual,*novo,*anterior;
    novo=(CelLista_De_Voos *) malloc (sizeof(CelLista_De_Voos));
    atual=*lista;
    anterior=NULL;
    novo->item_voo=*voo;
    if(atual==NULL){
        novo->prox=NULL;
        *lista=novo;
    }else{
        while(atual!=NULL && comparar_horas_voo(atual,voo)!=1){
            anterior=atual;
            atual=atual->prox;
        }
        novo->prox=atual;
        if(anterior==NULL){
            *lista=novo;
        }else{
            anterior->prox=novo;
        }
    }
    }
 */

/*
  void inserir_lista_voo(Lista_De_Voos *lista, Voo voo){
    CelLista_De_Voos *atual, *proximo, *novo;
    novo=(CelLista_De_Voos*) malloc(sizeof(CelLista_De_Voos));
    novo->item_voo=voo;
    atual=lista->primeiro;
    proximo=lista->primeiro->prox;
    while(proximo!=NULL){
        if(strcmp(proximo->item_voo.hora_decolagem,voo.hora_decolagem)>=0){
            break;
        }
        atual=proximo;
        proximo=proximo->prox;
    }
    novo->prox=atual;
    atual->prox=novo;
    }

 */