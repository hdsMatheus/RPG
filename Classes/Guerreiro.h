#ifndef GUERREIRO_H
#define GUERREIRO_H

#include "Entidade.h"
#include "Espada_enferrujada.h"
#include <iostream>

using namespace std;

class Guerreiro : public Entidade {
public:
    Guerreiro(string n) : Entidade{n, 120, 40, 20} { // vida, ataqueBase, defesaBase
            arma = new Espada_enferrujada();
        
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

        // DEBUG opcional — pode remover depois
        cout << "DEBUG:" << endl;
        cout << "Ataque final: " << ataque_final << endl;
        cout << "Dano da arma: " << arma->get_dano() << endl;
        cout << "Defesa da vítima: " << vitima.get_defesaBase() << endl;
        cout << "Dano bruto: " << dano << endl;

        if (dano < 1)
            return 1;
        return dano;
    }
};

#endif
