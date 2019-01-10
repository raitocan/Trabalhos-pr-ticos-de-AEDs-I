//
// Created by tais on 31/08/18.
//
#include "matriz_voos.h"

//Incializa a Matriz//
void Inicializar_Matriz(Matriz_voos *MatrizVoo){
    int i,j;
    for(i=0;i<24;i++){
        for(j=0;j<24;j++){
            Inicializa_Item_Matriz(&MatrizVoo->Elemento_Matriz[i][j]);
        }
    }
    MatrizVoo->total_de_voos=0;
    Alterar_Tempo(MatrizVoo);
}


//Insere elementos na Matriz//
void Inserir_Elementos_Matriz(Matriz_voos *Matriz,Voo Voo){
    int pouso,decolagem;
    char Pouso[6],Decolagem[6];
    sprintf(Pouso,"%c%c",Voo.hora_previsao_pouso[0],Voo.hora_previsao_pouso[1]);
    sprintf(Decolagem,"%c%c",Voo.hora_decolagem[0],Voo.hora_decolagem[1]);
    pouso=atoi(Pouso);
    decolagem=atoi(Decolagem);
    inserir_lista_voo(&(Matriz->Elemento_Matriz[pouso][decolagem].Lista),Voo);
    Matriz->total_de_voos++;
    Matriz->Elemento_Matriz[pouso][decolagem].Quantidade_voos++;
    Alterar_Tempo(Matriz);
    Alterar_Tempo_Item(&Matriz->Elemento_Matriz[pouso][decolagem]);
}
//Remove um determinado voo da matriz//
void Remover_Voo_Matriz(Matriz_voos *Matriz,int ID){
    int i,j,alternador;
    Lista_De_Voos *auxLista=NULL;
    alternador=0;
    for(i=0;i<24;i++) {
        for (j=0;j<24;j++) {
            auxLista=&Matriz->Elemento_Matriz[i][j].Lista;
            if(remover_lista_voo(auxLista,ID)==1){
                Matriz->total_de_voos--;
                Matriz->Elemento_Matriz[i][j].Quantidade_voos--;
                Alterar_Tempo(Matriz);
                Alterar_Tempo_Item(&Matriz->Elemento_Matriz[i][j]);
                printf("Removido com sucesso!\n");
                alternador=1;
                break;
            }
        }
    }
    if(alternador==0){
        printf("Voo nao encontrado\n");
    }
}

//Procura um determinado voo baseado no seu número de identificação//
void Procurar_Voo_Matriz(Matriz_voos *Matriz,int ID){
    int i,j,alternador;
    Lista_De_Voos *auxLista=NULL;
    Voo *auxVoo=NULL;
    alternador=0;
    for(i=0;i<24;i++) {
        for (j = 0; j < 24; j++) {
            auxLista=&Matriz->Elemento_Matriz[i][j].Lista;
            auxVoo=procura_lista_voo(auxLista,ID);
            if(auxVoo!=NULL){
                imprime_lista_voo(Matriz->Elemento_Matriz[i][j].Lista);
                alternador=1;
                break;
                }
            }
        }
    if(alternador==0){
        printf("Voo nao encontrado\n");
        }
    }

    //Imprime toda a matriz baseado em um horário de decolagem e de pouso//
void Imprime_Matriz_DecPouso(Matriz_voos *Matriz, char *D, char *P){

    int Decolagem,Pouso;
    char Dec[6], Pou[6];
    sprintf(Pou,"%c%c",P[0],P[1]);
    sprintf(Dec,"%c%c",D[0],D[1]);
    Pouso=atoi(Pou);
    Decolagem=atoi(Dec);
    imprime_lista_voo(Matriz->Elemento_Matriz[Pouso][Decolagem].Lista);

}

//Imprime a matriz baseado em um horário de decolagem//
void Imprime_Matriz_Dec(Matriz_voos *Matriz, char *D){
    int Decolagem,i;
    char Dec[6];
    sprintf(Dec,"%c%c",D[0],D[1]);
    Decolagem=atoi(Dec);
    for(i=0;i<24;i++){
        imprime_lista_voo(Matriz->Elemento_Matriz[i][Decolagem].Lista);
    }
}

//Imprime a matriz baseado em um horário de pouso//
void Imprime_Matriz_Pouso(Matriz_voos *Matriz, char *P){
    int i,Pouso;
    char Pou[6];
    sprintf(Pou,"%c%c",P[0],P[1]);
    Pouso=atoi(Pou);
    for(i=0;i<24;i++){
        imprime_lista_voo(Matriz->Elemento_Matriz[Pouso][i].Lista);
    }
}

//Imprime toda a matriz//
void Imprime_Matriz_All(Matriz_voos *Matriz){
    int i,j;
    for(i=0;i<24;i++){
        for(j=0;j<24;j++) {
            if((verifica_lista_vazia(&Matriz->Elemento_Matriz[j][i].Lista))!=1) {
                imprime_lista_voo(Get_Lista_voos(&Matriz->Elemento_Matriz[j][i]));
            }
        }
    }
}

//Percorrer a matriz toda, e calcula qual o item voo que possui mais voos//
void Maior_Quantidade_Voos(Matriz_voos *Matriz){
    int maior, maiorp,maiord,i,j;
    maior=0;
    for(i=0;i<24;i++){
        for(j=0;j<24;j++) {
            if(j==0 && i==0){
                maior=Matriz->Elemento_Matriz[j][i].Quantidade_voos;
                maiorp=j;
                maiord=i;
            }
            if(Matriz->Elemento_Matriz[j][i].Quantidade_voos>=maior){
                maior=Matriz->Elemento_Matriz[j][i].Quantidade_voos;
                maiorp=j;
                maiord=i;
            }
        }
    }
    printf("Maior numero de voos cadastrados: %d\n",maior);
    printf("Previsao de pouso com maior numero de voos: %d\n",maiorp);
    printf("Horario de decolagem com maior numero de voos: %d\n",maiord);
}

//Percorrer a matriz toda, e calcula qual o item voo que possui menos voos//
void Menor_Quantidade_Voos(Matriz_voos *Matriz){
    int menor, menorp,menord,i,j,alternador;
    alternador=0;
    for(i=0;i<24;i++){
        for(j=0;j<24;j++) {
            if(Matriz->Elemento_Matriz[j][i].Quantidade_voos!=0 && alternador==0){
                menor=Get_Quantidade_Voos(&Matriz->Elemento_Matriz[j][i]);
                menorp=j;
                menord=i;
                alternador=1;
            }
            if(Matriz->Elemento_Matriz[j][i].Quantidade_voos<=menor && Matriz->Elemento_Matriz[j][i].Quantidade_voos!=0){
                menor=Get_Quantidade_Voos(&Matriz->Elemento_Matriz[j][i]);
                menorp=j;
                menord=i;
            }
        }
    }
    printf("Menor numero de voos cadastrados: %d\n",menor);
    printf("Previsao de pouso com menor numero de voos: %d\n",menorp);
    printf("Horario de decolagem com menor numero de voos: %d\n",menord);
}


void Matriz_Ultima_Alteracao(Matriz_voos *Matriz){
    int i,j,p,d;
    char maior[6];
    strcpy(maior,"00:00");
    for(i=0;i<24;i++){
        for(j=0;j<24;j++) {
            if((strcmp(maior,Get_Horario_Ultimo(&Matriz->Elemento_Matriz[j][i])))<=0){
                strcpy(maior,Get_Horario_Ultimo(&Matriz->Elemento_Matriz[j][i]));
                p=j;
                d=i;
            }
        }
    }
    printf("Ultima atualizacao da Matriz: %s\n",Matriz->ultima_atualiza);
    printf("Ultima atualizacao: %s\n",maior);
    printf("Posicao da Matriz: \nPouso:%d\nDecolagem:%d\n",p,d);
}

void Matriz_primeira_Alteracao(Matriz_voos *Matriz){
    int i,j,p,d;
    p=0;
    d=0;
    char menor[6];
    strcpy(menor,"23:59");
    for(i=0;i<24;i++){
        for(j=0;j<24;j++) {
            if((strcmp(menor,Get_Horario_Ultimo(&Matriz->Elemento_Matriz[j][i])))>=0){
                strcpy(menor,Get_Horario_Ultimo(&Matriz->Elemento_Matriz[j][i]));
                p=j;
                d=i;
            }
        }
    }
    printf("Ultima atualizacao da Matriz: %s\n",Matriz->ultima_atualiza);
    printf("Primeira atualizacao: %s\n",menor);
    printf("Posicao da Matriz: \nPouso:%d\nDecolagem:%d\n",p,d);
}

void Matriz_esparca(Matriz_voos *Matriz){
    int i,j,vazio,preenchido;
    vazio=0;
    preenchido=0;
    for(i=0;i<24;i++) {
        for (j = 0; j < 24; j++) {
            if(Matriz->Elemento_Matriz[j][i].Quantidade_voos==0){
                vazio++;
            }
            else{
                preenchido++;
            }

        }
    }
    if(vazio>=2*preenchido){
        printf("Matriz esparca com %d vazios e %d preenchidos\n",vazio,preenchido);
    }
    else{
        printf("Matriz nao-esparca com %d vazios e %d preenchidos\n",vazio,preenchido);
    }
}

//Muda o tempo da Matriz para o tempo atual//
void Alterar_Tempo(Matriz_voos *Matriz){

    int horas,minutos,dia,mes,ano;
    char tempo[6],data[10];
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
    strcpy(Matriz->ultima_atualiza,tempo);
    strcpy(Matriz->data,data);

}
//Muda o tempo do Item matriz para o tempo atual//
void Alterar_Tempo_Item(Item_Matriz *Item){
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

void Set_Identificador(Matriz_voos *Matriz, int ID){
    Matriz->identificador=ID;
}
int Get_Identificador(Matriz_voos *Matriz){
    return Matriz->identificador;
}