//
// Created by tais on 31/08/18.
//
#include "lista_de_voos.h"

typedef struct {
    Lista_De_Voos Lista;
    int Quantidade_voos;
    char horario_ultimo[6];

} Item_Matriz;

void Set_Horario_ultimo(Item_Matriz *Item);

void Inicializa_Item_Matriz(Item_Matriz *Item);

Lista_De_Voos Get_Lista_voos(Item_Matriz *Item);

int Get_Quantidade_Voos(Item_Matriz *Item);

char* Get_Horario_Ultimo(Item_Matriz *Item);

void Set_Item_Matriz(Item_Matriz *Item, Lista_De_Voos *Lista);

