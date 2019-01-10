//
// Created by Athos on 02/12/2018.
//

#ifndef TP_DE_AEDS_TEMPO_H
#define TP_DE_AEDS_TEMPO_H

#include <stdlib.h>
#include <time.h>

typedef struct {
    clock_t tempoInicial;
    clock_t tempoFinal;
    double tempoTotal;
} Timer;

void TimerIniciar(Timer *timer);
void TimerParar(Timer *timer);
double TimerTempoTotal(Timer timer);

#endif //TP_DE_AEDS_TEMPO_H
