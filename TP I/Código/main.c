#include "matriz_voos.h"

int main() {
// Testes de Voo.c//
    Lista_De_Voos lista;
    nova_lista_voos(&lista);
    Voo teste,teste2,teste3,*remover;
    Item_Matriz ItemMatriz;
    Matriz_voos Matriz;
    //printf("Lista vazia? %d\n",verifica_lista_vazia(&lista));

    inicia_voo(&teste);
    set_id_pista_decolagem(&teste,1);
    set_hora_decolagem(&teste,"11:00");
    set_hora_previsao_pouso(&teste,"12:00");
    set_aeroporto_decolagem(&teste,"SaoPaulo");
    set_aeroporto_pouso(&teste,"Minas");
//print_voo(&teste);

    inicia_voo(&teste2);
    set_id_pista_decolagem(&teste2,1);
    set_hora_decolagem(&teste2,"11:30");
    set_hora_previsao_pouso(&teste2,"12:00");
    set_aeroporto_decolagem(&teste2,"Brasilia");
    set_aeroporto_pouso(&teste2,"Minas");
//print_voo(&teste2);

    inicia_voo(&teste3);
    set_id_pista_decolagem(&teste3,1);
    set_hora_decolagem(&teste3,"11:30");
    set_hora_previsao_pouso(&teste3,"14:00");
    set_aeroporto_decolagem(&teste3,"Brasilia");
    set_aeroporto_pouso(&teste3,"Minas");

    inserir_lista_voo(&lista,teste);
    inserir_lista_voo(&lista,teste2);
    inserir_lista_voo(&lista,teste3);
    //imprime_lista_voo(lista);

    // Teste de procura //
    /*
    printf("Lista vazia? %d\n",verifica_lista_vazia(&lista));
    remover=procura_lista_voo(&lista,334);
    print_voo(remover);
     */


    //printf("\nQual e o maior teste: %d\n",comparar_horas_voo(&teste3,&teste2));

// Testes de lista_de_voos.c//
    /*
    remover_lista_voo(lista.primeiro,&lista,&remover);
    remover_lista_voo(lista.primeiro,&lista,&remover);
    remover_lista_voo(lista.primeiro,&lista,&remover);
    printf("Lista vazia? %d\n",verifica_lista_vazia(&lista));
    imprime_lista_voo(lista);
    */
//imprime_lista_voo(lista);



//Testes de Item_matriz.c//

    Inicializa_Item_Matriz(&ItemMatriz);
    Set_Item_Matriz(&ItemMatriz,&lista);
    //printf("Ultimo horário: %s\n",Get_Horario_Ultimo(&ItemMatriz));
    //printf("Quantidade de voos: %d\n",Get_Quantidade_Voos(&ItemMatriz));
    Get_Lista_voos(&ItemMatriz);

//Testes de Matriz voos//
    Inicializar_Matriz(&Matriz);
    printf("Numero de elementos: %d\n",Matriz.total_de_voos);
    //Inserir_Elementos_Matriz(&Matriz,teste); // Erro no Inserir //
    printf("Numero de elementos: %d\n",Matriz.total_de_voos);

    return 0;

}
/*

 */

/*
Matriz_voos Matriz;
Voo teste;
Inicializar_Matriz(&Matriz);

inicia_voo(&teste);
set_id_voo(&teste,51);
set_id_pista_decolagem(&teste,1);
set_hora_decolagem(&teste,"11:00");
set_hora_previsao_pouso(&teste,"12:00");
set_aeroporto_decolagem(&teste,"SaoPaulo");
set_aeroporto_pouso(&teste,"Minas");
print_voo(&teste);


Inserir_Elementos_Matriz(&Matriz,&teste);
Procurar_Voo_Matriz(&Matriz,51);
printf("%d\n",Matriz.total_de_voos);
*/