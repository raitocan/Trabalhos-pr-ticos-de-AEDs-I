//
// Created by tais on 31/08/18.
//
#include "item_matriz.h"

typedef struct {
    Item_Matriz Elemento_Matriz[24][24];
    char data[10];
    char ultima_atualiza[6];
    int total_de_voos;
    int identificador;
}Matriz_voos;



void Inicializar_Matriz(Matriz_voos *MatrizVoo);
void Inserir_Elementos_Matriz(Matriz_voos *Matriz,Voo Voo);
void Remover_Voo_Matriz(Matriz_voos *Matriz,int ID);
void Procurar_Voo_Matriz(Matriz_voos *Matriz,int ID);
void Imprime_Matriz_DecPouso(Matriz_voos *Matriz, char *D, char *P);
void Imprime_Matriz_Dec(Matriz_voos *Matriz, char *D);
void Imprime_Matriz_Pouso(Matriz_voos *Matriz, char *P);
void Imprime_Matriz_All(Matriz_voos *Matriz);
void Maior_Quantidade_Voos(Matriz_voos *Matriz);
void Menor_Quantidade_Voos(Matriz_voos *Matriz);
void Matriz_Ultima_Alteracao(Matriz_voos *Matriz);
void Matriz_primeira_Alteracao(Matriz_voos *Matriz);
void Matriz_esparca(Matriz_voos *Matriz);
void Alterar_Tempo(Matriz_voos *Matriz);
void Alterar_Tempo_Item(Item_Matriz *Item);
void Set_Identificador(Matriz_voos *Matriz, int ID);
int Get_Identificador(Matriz_voos *Matriz);