//
// Created by Athos on 27/11/2018.
//

#include "random.h"


Voo Voo_Random(){
    Voo voo;
    char Aero[5];
    voo.id_voo=Random_Int(1000,9999);
    voo.id_pista_decolagem=Random_Int(0,10);
    Random_Hour(Aero);
    set_hora_previsao_pouso(&voo,Aero);
    Random_Hour(Aero);
    set_hora_decolagem(&voo,Aero);
    Random_Word(5,Aero);
    set_aeroporto_decolagem(&voo,Aero);
    Random_Word(5,Aero);
    set_aeroporto_pouso(&voo,Aero);
    return voo;
}


void Inicia_Random(){
    srand(time(NULL));
}

char Random_Char(){
    //Os caractéres ficam entre 65 e 95 na tabela ASC
    return (rand()%(65-95)+65);
}

int Random_Int(int min, int max){
    return (rand()%(min-max)+min);
}

void Random_Word(int Num, char Exit[]){
    int i;
    for(i=0;i<Num;i++){
        Exit[i]=Random_Char();
    }

}

void Random_Hour(char Hour[]) {
    int hora = Random_Int(0,23);
    int minutos = Random_Int(0,59);
    if(minutos<10){
        sprintf(Hour,"%d:0%d",hora,minutos);
    } else{
        sprintf(Hour,"%d:%d",hora,minutos);
    }
}

void Random_Vector(int V[],int tam, int min, int max){
    int i,j,aux,change;
    for(i=0;i<tam;i++){
        V[i]=i;
    }
    for(i=0;i<tam;i++){
        aux=Random_Int(0,tam);
        change=V[i];
        V[i]=V[aux];
        V[aux]=change;
    }
}

/*
 void OldRandom_Vector(int V[],int tam, int min, int max){
    int i,j=0,aux,check;
    check=0;
    while(j<tam) {
        aux=Random_Int(min,max);
        for (i = 0; i <= j; i++) {
            if(V[i]==aux){
                check=0;
                break;
            }else if(V[i]!=aux){
                check=1;
            }
        }
        if(check==1){
            V[j]=aux;
            j++;
        }
    }
}

 void Random_Vector(int V[],int tam, int min, int max){
    int i,j,aux,change;
    for(i=0;i<tam;i++){
        V[i]=i;
    }
    for(i=0;i<tam;i++){
        aux=Random_Int(0,tam);
        change=V[i];
        V[i]=V[aux];
        V[aux]=change;
    }
}
 */