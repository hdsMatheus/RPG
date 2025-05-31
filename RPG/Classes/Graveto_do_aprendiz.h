#ifndef GRAVETO_DO_APRENDIZ_H
#define GRAVETO_DO_APRENDIZ_H
#include "Arma.h"

class Graveto_do_aprendiz : public Arma{
    public:
        Graveto_do_aprendiz() : Arma{"Graveto do Aprendiz", 5}{} //dano a ser estudado
        int get_dano( )const {return Arma_dano;};
        int get_preco() const {return item_preco;};
};

#endif