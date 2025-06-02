#ifndef BOSS_H
#define BOSS_H

#include "Entidade.h"
#include "Ruina.h"
#include <stdexcept>

using namespace std;

class Boss : public Entidade {
public:
    Boss() : Entidade{"Nameless", 200, 25, 50} {
        arma = new Espada_da_ruina();
    }

    string get_nome() const { return nome; }
    int get_vidaBase() const { return vidaBase; }
    int get_defesaBase() const { return defesaBase; }
    string get_armaEquipada_nome() const { return arma->get_nome_arma(); }

    void equipar_arma(Arma* eqp) { arma = eqp; }

    int ataque() const {
        double fator = (10 + rand() % 11) / 10.0; // entre 100% e 200%
        return ataqueBase * fator;
    }

    int Dano_ataque(Entidade& vitima) const {
        try {
            int dano = ataque() + arma->get_dano() - vitima.get_defesaBase();
            if (dano < 0) throw out_of_range("");
            return dano;
        } catch (out_of_range&) {
            return 0;
        }
    }
};

#endif
