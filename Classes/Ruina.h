#ifndef RUINA_H
#define RUINA_H

#include "Arma.h"

class Espada_da_ruina : public Arma {
public:
    Espada_da_ruina() : Arma{"Espada da Ruína", 20, 10} {} // 20 de dano, 10 preço

    int get_dano() const { return Arma_dano; }
    int get_preco() const { return item_preco; }
    string get_arma_nome() const { return get_item_nome(); }
};

#endif
