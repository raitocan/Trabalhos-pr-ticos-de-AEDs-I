//
// Created by tais on 31/08/18.
//

#include "item_matriz.h"

//Define o ultimo horário de atualização//
void Set_Horario_ultimo(Item_Matriz *Item){
    int horas,minutos;
    char tempo[6];
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    horas=local->tm_hour;
    minutos=local->tm_min;
    sprintf(tempo,"%d:%d",horas,minutos);
    strcpy(Item->horario_ultimo,tempo);
}

//Inicializa o Item matriz//
void Inicializa_Item_Matriz(Item_Matriz *Item){
    nova_lista_voos(&Item->Lista);
    Item->Quantidade_voos=0;
    Set_Horario_ultimo(Item);
}

//Retorna uma lista de voos específica//
Lista_De_Voos Get_Lista_voos(Item_Matriz *Item){
    return Item->Lista;
}

//Retorna a quantidade de voos do item//
int Get_Quantidade_Voos(Item_Matriz *Item){
    return Item->Quantidade_voos;
}

//Retorna o horário da ultima atualização//
char* Get_Horario_Ultimo(Item_Matriz *Item){
    return Item->horario_ultimo;
}

//Define os parametros do item matriz//
void Set_Item_Matriz(Item_Matriz *Item, Lista_De_Voos *Lista){
    CelLista_De_Voos *auxiliar;
    auxiliar=Lista->primeiro->prox;
    while(auxiliar!=NULL){
        Item->Quantidade_voos++;
        auxiliar = auxiliar->prox;
    }
    Item->Lista=*Lista;
    Set_Horario_ultimo(Item);

}
