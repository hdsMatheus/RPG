#include "Mago.h"
#include <stdexcept>

using namespace std;

Mago::Mago(): Entidade{100, 4, 50}{
    Entidade_nome = "Mago";
    arma = new Graveto_do_aprendiz();
}

int Mago::ataque()const{
    return ataqueBase * ((5+(rand()%9))); //Mago pode dar entre 50 e 130% de seu dano base
}

int Mago::Dano_ataque(Entidade& vitima)const{
    try{
    int dano = ataque()+arma->get_dano() - vitima.get_defesaBase();
    if(dano < 0) throw out_of_range("");
    return dano;
    }
    catch(out_of_range &exce){
        return 0;
    }
}