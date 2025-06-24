#ifndef ASSALTO_H
#define ASSALTO_H

#include "Evento_aleatorio.h"
#include <string> 
#include <random>

using namespace std;

class Jogador;

class Assalto : public EventoAleatorio {
public:
    Assalto();
    bool executar_evento(Jogador& jogador) override;
};

#endif