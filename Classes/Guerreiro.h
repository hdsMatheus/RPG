#ifndef GUERREIRO_H
#define GUERREIRO_H
#include "Entidade.h"
#include "Arma.h"
#include "Espada_enferrujada.h"
class Guerreiro : public Entidade{
        Guerreiro(string);
        void equipar_arma(Arma* eqp){arma = eqp;}
        int ataque();
        int Dano_ataque(Entidade&);
};

#endif