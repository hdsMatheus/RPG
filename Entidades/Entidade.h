#ifndef ENTIDADE_H
#define ENTIDADE_H
#include <string>
#include <ctime>
#include "../Armas/Arma.h"
using namespace std;

class Entidade{
    protected:
        string Entidade_nome;
        int ataqueBase, defesaBase, vidaBase;       
        Arma *arma = nullptr;

    public:
        Entidade(int v, int atq, int def) : ataqueBase{atq}, defesaBase{def}, vidaBase{v}{srand(time(NULL));}
        ~Entidade(){delete arma;};

        string get_entidade_nome()const{ return Entidade_nome; }
        int get_vidaBase()const{return vidaBase;}
        int get_defesaBase()const{return defesaBase;}
        string get_armaEquipada_nome()const{return arma->get_nome_arma();}
        virtual int ataque()const = 0; //calcula o ataque base, utilizando o parametro ataqueBase e porcentagens desse dano
        virtual int Dano_ataque(Entidade&)const = 0; //calcula o dano no adversario com base na funcao ataque, arma, defesaBase do oponente e armadura (parametro a ser add)
        virtual void equipar_arma(Arma*){}
        //funcoes de buff
        virtual void buffVida(int vida) = 0;
        virtual void debuffVida(int vida) = 0;
        virtual void buffDano(int dano) = 0;
        virtual void debuffDano(int dano) = 0;
        virtual void buffDefesa(int def) = 0;
        virtual void debuffDefesa(int def) = 0;
};


#endif