#ifndef INIMIGO_H
#define INIMIGO_H
#include "Entidade.h"

using namespace std;

class Inimigo : public Entidade{
    public:
        Inimigo(int v, int atq, int def) : Entidade{v, atq, def}{srand(time(NULL));}
        virtual ~Inimigo(){}
        string get_entidade_nome()const{ return Entidade_nome; }
        int get_vidaBase()const{return vidaBase;}
        int get_defesaBase()const{return defesaBase;}
        int get_ataqueBase()const{return ataqueBase;}
        string get_armaEquipada_nome()const{return arma->get_nome_arma();}
        int ataque()const;
        int Dano_ataque(Entidade&)const;
};

#endif