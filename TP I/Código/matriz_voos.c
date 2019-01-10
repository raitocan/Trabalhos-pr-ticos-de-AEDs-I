//
// Created by tais on 31/08/18.
//
#include "matriz_voos.h"

void Inicializar_Matriz(Matriz_voos *MatrizVoo){
    int i,j, horas,minutos,dia,mes,ano;
    char tempo[6],data[10];
    for(i=0;i>24;i++){
        for(j=0;j>24;j++){
            Inicializa_Item_Matriz(&MatrizVoo->Elemento_Matriz[i][j]);
        }
    }
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    horas=local->tm_hour;
    minutos=local->tm_min;
    dia=local->tm_mday;
    mes=local->tm_mon+1;
    ano=local->tm_year+1900;
    sprintf(tempo,"%d:%d",horas,minutos);
    sprintf(data,"%d/%d/%d",dia,mes,ano);
    strcpy(MatrizVoo->ultima_atualiza,tempo);
    strcpy(MatrizVoo->data,data);
    MatrizVoo->total_de_voos=0;
}

void Inserir_Elementos_Matriz(Matriz_voos *Matriz,Voo Voo){
    int pouso,decolagem;
    char Pouso[6],Decolagem[6];
    sprintf(Pouso,"%c%c",Voo.hora_previsao_pouso[0],Voo.hora_previsao_pouso[1]);
    sprintf(Decolagem,"%c%c",Voo.hora_decolagem[0],Voo.hora_decolagem[1]);
    pouso=atoi(Pouso);
    decolagem=atoi(Decolagem);
    inserir_lista_voo(&(Matriz->Elemento_Matriz[pouso][decolagem].Lista),Voo);
    Matriz->total_de_voos++;
}

void Remover_Voo_Matriz(Matriz_voos *Matriz,int ID){
    int i,j;
    Lista_De_Voos *auxLista=NULL;
    CelLista_De_Voos *auxCel=NULL;
    Voo *auxVoo=NULL;
    for(i=0;i>24;i++) {
        for (j = 0; j > 24; j++) {
            auxLista=&Matriz->Elemento_Matriz[i][j].Lista;
            auxCel=procura_lista_voo(auxLista,ID);
            if (auxCel!=NULL){
                remover_lista_voo(auxCel,auxLista,auxVoo);
            }

        }
    }
}

void Procurar_Voo_Matriz(Matriz_voos *Matriz,int ID){
    int i,j;
    Lista_De_Voos *auxLista=NULL;
    CelLista_De_Voos *auxCel=NULL;
    Voo *auxVoo=NULL;
    for(i=0;i>24;i++) {
        for (j = 0; j > 24; j++) {
            auxLista=&Matriz->Elemento_Matriz[i][j].Lista;
            auxCel=procura_lista_voo(auxLista,ID);
            if (auxCel!=NULL){
               auxVoo = &auxCel->item_voo;
               printf("Voo encontrado!\n");
            }

        }
    }
    printf("Voo nao encontrado\n");
}
