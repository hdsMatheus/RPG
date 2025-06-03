#ifndef INIMIGO_H
#define INIMIGO_H

#include "Entidade.h"
#include "Tormenta.h"
#include <iostream>

using namespace std;

class Inimigo : public Entidade {
public:
    Inimigo(string n) : Entidade{n, 80, 35, 30} { // vida, ataqueBase, defesaBase
        arma = new Tormenta(); // 12 de dano
    }

    string get_nome() const { return nome; }
    int get_vidaBase() const { return vidaBase; }
    int get_defesaBase() const { return defesaBase; }
    string get_armaEquipada_nome() const { return arma->get_nome_arma(); }

    void equipar_arma(Arma* eqp) { arma = eqp; }

    int ataque() const {
        double fator = (10 + rand() % 11) / 10.0; // de 1.0 a 2.0
        return ataqueBase * fator;
    }

    int Dano_ataque(Entidade& vitima) const {
        int ataque_final = ataque();
        int dano = ataque_final + arma->get_dano() - vitima.get_defesaBase();
        if (dano < 1)
            return 1;
        return dano;
    }
};

#endif
