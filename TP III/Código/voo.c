//
// Created by tais on 31/08/18.
//

#include "voo.h"

//Inicia o tipo voo //
void inicia_voo(Voo *IVoo){
    //set_id_voo(IVoo);
    IVoo->id_voo = rand()%10000;
    IVoo->id_pista_decolagem=0;
    IVoo->aeroporto_decolagem[0]='\0';
    IVoo->aeroporto_pouso[0]='\0';
    IVoo->hora_decolagem[0]='\0';
    IVoo->hora_previsao_pouso[0]='\0';
}

//Retorna o ID do voo//
int get_id_voo(Voo *Ivoo){
    return Ivoo->id_voo;
}

//Muda o ID do voo//
void set_id_voo(Voo *IVoo, int novoid){
    IVoo->id_voo = novoid;
}

//Muda o ID da pista de decolagem//
void set_id_pista_decolagem(Voo *IVoo, int novo_id_pista){
    IVoo->id_pista_decolagem=novo_id_pista;
}

//Retorna o ID da pista de decolagem//
int get_id_pista_decolagem(Voo *IVoo){
    return IVoo->id_pista_decolagem;
}

//Muda a hora de decolagem de um determinado Voo//
void set_hora_decolagem(Voo *IVoo, char hora_decolagem[]){
    strcpy(IVoo->hora_decolagem ,hora_decolagem);
}

//Retorna a hora de decolagem de um determinado voo//
char* get_hora_decolagem(Voo *IVoo){
    return IVoo->hora_decolagem;
}

//Muda a hora de previsão de pouso//
void set_hora_previsao_pouso(Voo *IVoo, char previsao_pouso[]){
    strcpy(IVoo->hora_previsao_pouso ,previsao_pouso);

}

//Retorna a hora de previsão de pouso//
char* get_hora_previsao_pouso(Voo *IVoo){
    return IVoo->hora_previsao_pouso;
}

//Muda o aeroporto de pouso//
void set_aeroporto_pouso(Voo *IVoo,char aeroporto_p[]){
    strcpy(IVoo->aeroporto_pouso ,aeroporto_p);

}

//Retorna o aeroporto de pouso//
char* get_aeroporto_pouso(Voo *IVoo){
    return IVoo->aeroporto_pouso;
}

//Define o aeroporto de decolagem//
void set_aeroporto_decolagem(Voo *IVoo,char aeroporto_d[]){
    strcpy(IVoo->aeroporto_decolagem ,aeroporto_d);
}
//retorna o aeroporto de decolagem//
char* get_aeroporto_decolagem(Voo *IVoo){
    return IVoo->aeroporto_decolagem;
}

