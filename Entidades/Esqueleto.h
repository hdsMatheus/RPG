#ifndef ESQUELETO_H
#define ESQUELETO_H
#include "Inimigo.h"
#include "Entidade.h"

using namespace std;

class Esqueleto : public Entidade{
    public:
        Esqueleto();

        string get_entidade_nome()const{ return Entidade_nome; }
        int get_vidaBase()const{return vidaBase;}
        int get_defesaBase()const{return defesaBase;}
        string get_armaEquipada_nome()const{return arma->get_nome_arma();}
        int ataque()const;
        int Dano_ataque(Entidade&)const;

        void buffVida(int vida)override{ vidaBase += vida;};
        void debuffVida(int vida) override{ vidaBase -= vida;};
        void buffDano(int dano) override{ ataqueBase += dano;};
        void debuffDano(int dano) override{ ataqueBase -= dano;};
        void buffDefesa(int def) override{ defesaBase += def;};
        void debuffDefesa(int def) override{ defesaBase -=def;};
};

#endif