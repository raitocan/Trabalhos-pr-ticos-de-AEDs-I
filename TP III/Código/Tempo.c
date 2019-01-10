//
// Created by Athos on 02/12/2018.
//

#include "Tempo.h"

void TimerIniciar(Timer *timer) {
    timer->tempoInicial = clock();
}

void TimerParar(Timer *timer) {
    timer->tempoFinal = clock();
    timer->tempoTotal = (double)(timer->tempoFinal - timer->tempoInicial)/CLOCKS_PER_SEC;
}

double TimerTempoTotal(Timer timer) {
    return timer.tempoTotal;
}