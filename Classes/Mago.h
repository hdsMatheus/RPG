#ifndef MAGO_H
#define MAGO_H
#include "Arma.h"
#include "Entidade.h"
#include "Graveto_do_aprendiz.h"

using namespace std;

class Mago : public Entidade{
    public:
        Mago(string);
        string get_nome()const{return nome;}
        int get_vidaBase()const{return vidaBase;}
        int get_defesaBase()const{return defesaBase;}
        string get_armaEquipada_nome()const{return arma->get_nome_arma();}
        void equipar_arma(Arma* eqp)override{arma = eqp;}
        int ataque()const;
        int Dano_ataque(Entidade&)const;
};

#endif