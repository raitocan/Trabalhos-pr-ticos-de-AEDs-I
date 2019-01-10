#include "matriz_voos.h"

/*

int main() {
// Testes de Voo.c//
    int Modo,Exit,ID,Idecolagem,T1,T2,END;
    END=0;
    char Operacao,continuar[10],filename[50], par1[10],Hdecolagem[10],Hpouso[10],Adecolagem[30],Apouso[30];
    FILE *Arquivo;
    Voo Temporario;
    Matriz_voos Matriz;
    //Inicialização de variáveis//
    Modo=0, Exit=0, ID=0, Idecolagem=0 ;

    inicia_voo(&Temporario);
    Inicializar_Matriz(&Matriz);
    //Fim da inicialização de variáveis
    while(END==0){
        printf("Escolha seu modo de operacao:\n");
        printf("1) Modo Interativo\n");
        printf("2) Modo Arquivo\n");
        printf("3) Sair\n");
        scanf("%d",&Modo);
        if (Modo==1){
            while(Exit!=1){
                printf("Escolha qual operacao voce deseja efetuar:\n");
                printf("A) Inicializar Matriz\n");
                printf("B) Inserir item na Matriz\n");
                printf("C) Remover voo da Matriz usando o ID\n");
                printf("D) Procurar um voo na Matriz\n");
                printf("E) Imprimir voos, dados horario de decolagem e horario de pouso previsto\n");
                printf("F) Imprimir voos, dado horario de decolagem apenas\n");
                printf("G) Imprimir voos, dado horario previsto de pouso apenas.\n");
                printf("H) Imprimir toda a Matriz\n");
                printf("I) Encontrar faixa de horario de decolagem e previsao de pouso com maior numero de voos cadastrados\n");
                printf("J) Encontrar faixa de horario de decolagem e previsao de pouso com menor numero de voos cadastrados\n");
                printf("K) Encontrar lista de voos mais recentemente alterada\n");
                printf("L) Encontrar lista de voos menos recentemente alterada. \n");
                printf("M) Verificar se matriz e esparca\n");
                printf("X) Sair\n");
                scanf("%c",&Operacao);
                printf("A operacao escolhida foi: %c\n",Operacao);

                // Operação da Inicializar a Matriz//
                if(Operacao=='A' || Operacao=='a'){
                    Inicializar_Matriz(&Matriz);
                    printf("Matriz Inicializada!\n");
                    printf("Pressione alguma tecla para continuar\n");
                    scanf("%s",continuar);
                }

                // Operação de Inserir na Matriz//
                if(Operacao=='B' || Operacao=='b'){
                    inicia_voo(&Temporario);

                    printf("Digite a hora de decolagem:\n");
                    scanf("%s",Hdecolagem);
                    set_hora_decolagem(&Temporario,Hdecolagem);

                    printf("Digite a hora de previsao de pouso:\n");
                    scanf("%s",Hpouso);
                    set_hora_previsao_pouso(&Temporario,Hpouso);

                    printf("Digite o aeroporto de decolagem:\n");
                    scanf("%s",Adecolagem);
                    set_aeroporto_decolagem(&Temporario,Adecolagem);

                    printf("Digite o aeroporto de pouso\n");
                    scanf("%s",Apouso);
                    set_aeroporto_pouso(&Temporario,Apouso);

                    printf("Digite o ID da pista de decolagem:\n");
                    scanf("%d",&Idecolagem);
                    set_id_pista_decolagem(&Temporario,Idecolagem);

                    Inserir_Elementos_Matriz(&Matriz,Temporario);
                    printf("Item inserido com sucesso!\n");
                    printf("Pressione alguma tecla para continuar\n");
                    scanf("%s",continuar);
                }

                // Remover voo da Matriz//
                if(Operacao=='C' || Operacao=='c'){
                    printf("Digite o ID do item a ser removido:\n");
                    scanf("%d",&ID);
                    Remover_Voo_Matriz(&Matriz,ID);
                    printf("Pressione alguma tecla para continuar\n");
                    scanf("%s", continuar);
                }

                // Operação procura de voo na Matriz //
                if(Operacao=='D' || Operacao=='d'){
                    printf("Digite o ID do voo a ser procurado:\n");
                    scanf("%d",&ID);
                    Procurar_Voo_Matriz(&Matriz,ID);
                    printf("Pressione alguma tecla para continuar\n");
                    scanf("%s",continuar);
                }

                // Operação Imprimir voos, com hora de decolagem e previsão de pouso //
                if(Operacao=='E' || Operacao=='e'){
                    printf("Digite a hora de decolagem:\n");
                    scanf("%s",Temporario.hora_decolagem);
                    printf("Digite a hora de previsao de pouso:\n");
                    scanf("%s",Temporario.hora_previsao_pouso);
                    Imprime_Matriz_DecPouso(&Matriz, Temporario.hora_decolagem, Temporario.hora_previsao_pouso);
                    printf("Pressione alguma tecla para continuar\n");
                    scanf("%s",continuar);
                }

                // Operação Imprimir voos, dado horario de decolagem apenas //
                if(Operacao=='F' || Operacao=='f'){
                    printf("Digite a hora de decolagem:\n");
                    scanf("%s",Temporario.hora_decolagem);
                    Imprime_Matriz_Dec(&Matriz, Temporario.hora_decolagem);
                    printf("Pressione alguma tecla para continuar\n");
                    scanf("%s",continuar);
                }
                // Operação Imprimir voos, dado horario previsto de pouso apenas. //
                if(Operacao=='G' || Operacao=='g'){
                    printf("Digite a hora de previsao de pouso:\n");
                    scanf("%s",Temporario.hora_previsao_pouso);
                    Imprime_Matriz_Pouso(&Matriz, Temporario.hora_previsao_pouso);
                    printf("Pressione alguma tecla para continuar\n");
                    scanf("%s",continuar);
                }

                // Printar toda Matriz//
                if(Operacao=='H' || Operacao=='h'){
                    Imprime_Matriz_All(&Matriz);
                    printf("Matriz printada com sucesso!\n");
                    printf("Pressione alguma tecla para continuar\n");
                    scanf("%s",continuar);
                }

                // Operação que retorna a faixa de horário com maior numero de voos//
                if(Operacao=='I' || Operacao=='i'){
                    Maior_Quantidade_Voos(&Matriz);
                    printf("Pressione alguma tecla para continuar\n");
                    scanf("%s",continuar);
                }

                // Operação que retorna a faixa com o menor numero de voos cadastrados//
                if(Operacao=='J' || Operacao=='j'){
                    Menor_Quantidade_Voos(&Matriz);
                    printf("Pressione alguma tecla para continuar\n");
                    scanf("%s",continuar);

                }

                // Operação que retorna a lista de voo mais recente //
                if(Operacao=='K' || Operacao=='k'){
                    Matriz_Ultima_Alteracao(&Matriz);
                    printf("Pressione alguma tecla para continuar\n");
                    scanf("%s",continuar);
                }

                // Operação que retorna a lista de voo menos recente//
                if(Operacao=='L' || Operacao=='l'){
                    Matriz_primeira_Alteracao(&Matriz);
                    printf("Pressione alguma tecla para continuar\n");
                    scanf("%s",continuar);
                }

                // Operação de verificação se a Matriz é esparça//
                if(Operacao=='M' || Operacao=='m'){
                    Matriz_esparca(&Matriz);
                    printf("Pressione alguma tecla para continuar\n");
                    scanf("%s",continuar);
                }

                // Saida do loop//
                if(Operacao=='x' || Operacao=='X'){
                    printf("\nFim do codigo\n");
                    Exit=1;
                    break;}

            }

        }
        if(Modo==2) {
            printf("Digite o nome do arquivo: ");
            scanf("%s", filename);
            if (fopen(filename, "r") != NULL) {
                printf("Arquivo aberto com sucesso!\n");
                Arquivo = fopen(filename, "r");
            } else {
                printf("Erro ao abrir o arquivo.\n");
            }
            while (!feof(Arquivo)) {
                fscanf(Arquivo, "%s", par1);

                //Inicializa a Matriz//
                if (strcmp(par1, "a") == 0 || strcmp(par1, "A") == 0) {
                    Inicializar_Matriz(&Matriz);
                    printf("Matriz Inicalizada!\n");
                }

                //Insere um determinado voo na matriz//
                if (strcmp(par1, "b") == 0 || strcmp(par1, "B") == 0) {
                    inicia_voo(&Temporario);
                    fscanf(Arquivo, "%s %s %s %s %d", Temporario.hora_decolagem, Temporario.hora_previsao_pouso,
                           Temporario.aeroporto_decolagem, Temporario.aeroporto_pouso, &Temporario.id_pista_decolagem);
                    Inserir_Elementos_Matriz(&Matriz, Temporario);
                    printf("Elemento inserido na Matriz!\n");
                }

                //Remove um determinado voo baseado no ID//
                if (strcmp(par1, "c") == 0 || strcmp(par1, "C") == 0) {
                    fscanf(Arquivo, "%s", par1);
                    ID = atoi(par1);
                    Remover_Voo_Matriz(&Matriz, ID);
                }

                //Procura um determinado voo baseado no ID//
                if (strcmp(par1, "d") == 0 || strcmp(par1, "D") == 0) {
                    fscanf(Arquivo, "%s", par1);
                    ID = atoi(par1);
                    Procurar_Voo_Matriz(&Matriz, ID);
                }

                //Imprime uma parte da matriz baseado no horário de decolagem e no horário de previsão de pouso//
                if (strcmp(par1, "e") == 0 || strcmp(par1, "E") == 0) {
                    fscanf(Arquivo, "%s %s", Temporario.hora_decolagem, Temporario.hora_previsao_pouso);
                    Imprime_Matriz_DecPouso(&Matriz, Temporario.hora_decolagem, Temporario.hora_previsao_pouso);

                }
                //Imprime uma parte da matriz baseado na hora de decolagem//
                if (strcmp(par1, "f") == 0 || strcmp(par1, "F") == 0) {
                    fscanf(Arquivo, "%s", Temporario.hora_decolagem);
                    Imprime_Matriz_Dec(&Matriz, Temporario.hora_decolagem);

                }
                //Imprime uma parte da matriz baseado na hora do pouso//
                if (strcmp(par1, "g") == 0 || strcmp(par1, "G") == 0) {
                    fscanf(Arquivo, "%s", Temporario.hora_previsao_pouso);
                    Imprime_Matriz_Pouso(&Matriz, Temporario.hora_previsao_pouso);

                }

                //Imprime toda a matriz//
                if (strcmp(par1, "h") == 0 || strcmp(par1, "H") == 0) {
                    Imprime_Matriz_All(&Matriz);
                }

                //Verifica a faixa de horário com mais voos//
                if (strcmp(par1, "i") == 0 || strcmp(par1, "I") == 0) {
                    Maior_Quantidade_Voos(&Matriz);
                }

                //Verifica a faixa de horário com menos voos//
                if (strcmp(par1, "j") == 0 || strcmp(par1, "J") == 0) {
                    Menor_Quantidade_Voos(&Matriz);
                }

                //Verifica a ultima atualização da Matriz//
                if (strcmp(par1, "k") == 0 || strcmp(par1, "K") == 0) {
                    Matriz_Ultima_Alteracao(&Matriz);
                }

                //Verifica a hora da primeira atualização da Matriz//
                if (strcmp(par1, "l") == 0 || strcmp(par1, "L") == 0) {
                    Matriz_primeira_Alteracao(&Matriz);
                }

                //Verifica se a Matriz é esparca//
                if (strcmp(par1, "m") == 0 || strcmp(par1, "M") == 0) {
                    Matriz_esparca(&Matriz);
                }

            }
            printf("Pressione alguma tecla para continuar\n");
            scanf("%s", continuar);
        }
        if(Modo==3){
            END=1;
        }
    }
    return 0;
}
 */