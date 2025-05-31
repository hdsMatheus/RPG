#ifndef ARMA
#define ARMA_H
#include <string>
#include "Item.h"

class Arma : public Item{
    protected:
        string Arma_nome;
        int Arma_dano;
    public:
        Arma(string n, int d) : Arma_nome{n}, Arma_dano{d}{}
        virtual int get_dano()const = 0;
        virtual int get_preco()const = 0;
};

#endif          