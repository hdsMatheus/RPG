#include "Entidade.h"
#include <stdexcept>
using namespace std;
int Entidade::Dano_ataque(Entidade& vitima){
    try{
    int dano = ataque()+arma->get_dano() - vitima.defesaBase;
    if(dano < 0) throw out_of_range("");
    return dano;
    }
    catch(out_of_range &exce){
        return 0;
    }
}

Entidade::~Entidade(){
    delete arma;
}