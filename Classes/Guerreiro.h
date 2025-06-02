#ifndef GUERREIRO_H
#define GUERREIRO_H

#include "Entidade.h"
#include "Espada_enferrujada.h"

class Guerreiro : public Entidade {

public:

    Guerreiro(string);
    
    string get_nome() const { return nome; }
    int get_vidaBase() const { return vidaBase; }
    int get_defesaBase() const { return defesaBase; }
    string get_armaEquipada_nome() const { return arma->get_nome_arma(); }

    void equipar_arma(Arma* eqp) { arma = eqp; }
    int ataque() const;
    int Dano_ataque(Entidade&) const;
};

#endif
