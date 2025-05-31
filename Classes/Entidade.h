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
        int ataque(){return ataqueBase*(rand()%12);};
        Arma *arma = nullptr;

    public:
        Entidade(string n, int v, int atq, int def) : nome{n}, ataqueBase{atq}, defesaBase{def}, vidaBase{v}{srand(time(NULL));}
        ~Entidade();
        string get_nome(){return nome;}
  
        int Dano_ataque(Entidade&);
        virtual void equipar_arma(Arma&)const = 0;
};


#endif