//
// Created by tais on 31/08/18.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


typedef struct {
    int id_voo;
    int id_pista_decolagem;
    char hora_decolagem[6];
    char hora_previsao_pouso[6];
    char aeroporto_pouso[50];
    char aeroporto_decolagem[50];
}Voo;


void inicia_voo(Voo *IVoo);

int get_id_voo(Voo *Ivoo);

void set_id_voo(Voo *IVoo, int novo_id);

void set_id_pista_decolagem(Voo *IVoo, int novo_id_pista);

int get_id_pista_decolagem(Voo *IVoo);

void set_hora_decolagem(Voo *IVoo, char hora_decolagem[]);

char* get_hora_decolagem(Voo *IVoo);

void set_hora_previsao_pouso(Voo *IVoo, char previsao_pouso[]);

char* get_hora_previsao_pouso(Voo *IVoo);

void set_aeroporto_pouso(Voo *IVoo,char aeroporto_p[]);

char* get_aeroporto_pouso(Voo *IVoo);

void set_aeroporto_decolagem(Voo *IVoo,char aeroporto_d[]);

char* get_aeroporto_decolagem(Voo *IVoo);

int comparar_horas_voo(Voo *IVoo, Voo *IIVoo);

void print_voo(Voo *IVoo);