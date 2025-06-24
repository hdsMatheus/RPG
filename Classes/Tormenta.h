#ifndef TORMENTA_H
#define TORMENTA_H

#include "Arma.h"

class Tormenta : public Arma {
public:
    Tormenta() : Arma{"Tormenta", 7, 6} {} // 12 de dano, 6 de preço

    int get_dano() const { return Arma_dano; }
    int get_preco() const { return item_preco; }
    string get_arma_nome() const { return get_item_nome(); }
};

#endif
