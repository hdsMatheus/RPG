#ifndef ENTIDADE_H
#define ENTIDADE_H
#include <string>
#include <ctime>
#include "Arma.h"

using namespace std;

class Entidade{
    protected:
        string nome;
        int ataqueBase, defesaBase, vidaBase;       
        Arma *arma = nullptr;

    public:
        Entidade(string n, int v, int atq, int def) : nome{n}, ataqueBase{atq}, defesaBase{def}, vidaBase{v}{srand(time(NULL));}
        ~Entidade(){delete arma;};
        string get_nome(){return nome;}
        int get_vidaBase(){return vidaBase;}
        int get_defesaBase(){return defesaBase;}
        virtual int ataque()const = 0;
        virtual int Dano_ataque(Entidade&)const = 0;
        virtual void equipar_arma(Arma*){}
};


#endif