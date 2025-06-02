#include "Guerreiro.h"
#include <stdexcept>

Guerreiro::Guerreiro(string n) : Entidade{n, 120, 16, 55} { //120 de vida, 16 de atq e 55 de def
    arma = new Espada_enferrujada();
}

int Guerreiro::ataque() const {
    return ataqueBase * ((2 + rand() % 11) / 10); // 20% a 110%
}

int Guerreiro::Dano_ataque(Entidade& vitima) const {
    try {
        int dano = ataque() + arma->get_dano() - vitima.get_defesaBase();
        if (dano < 0) throw out_of_range("");
        return dano;
    } catch (out_of_range&) {
        return 0;
    }
}
