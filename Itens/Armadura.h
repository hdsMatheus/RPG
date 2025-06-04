#ifndef ARMADURA_H
#define ARMADURA_H
#include "Item.h"

class Armadura : public Item{
    protected:
        int Armadura_defesa;
    public:
        Armadura(string n, int d, int prc) : Item{n, prc}, Armadura_defesa{d}{}
        virtual int get_dano()const = 0;
        virtual int get_preco()const = 0;
        string get_nome_arma()const{return get_item_nome();}
};

#endif