#ifndef INIMIGO_H
#define INIMIGO_H
#include <stdexcept>
#include "Entidade.h"
#include "Tormenta.h"

using namespace std;

class Inimigo : public Entidade {
public:
    Inimigo(string n) : Entidade{n, 80, 10, 30} {
        arma = new Tormenta();
    }

    string get_nome() const { return nome; }
    int get_vidaBase() const { return vidaBase; }
    int get_defesaBase() const { return defesaBase; }
    string get_armaEquipada_nome() const { return arma->get_nome_arma(); }

    void equipar_arma(Arma* eqp) { arma = eqp; }

    int ataque() const {
        double fator = (8 + rand() % 6) / 10.0; // entre 80% e 130%
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
