#include "Guerreiro.h"
#include <stdexcept>

using namespace std;

Guerreiro::Guerreiro(): Entidade{120, 16, 55}{ //120 de vida, 16 de atq e 55 de def
    Entidade_nome = "Guerreiro";
    arma = new Espada_enferrujada();
}

int Guerreiro::ataque()const{
    return ataqueBase * ((2+rand()%11)/10); //Guerreiro pode dar entre 20 e 110% de seu dano base
}

int Guerreiro::Dano_ataque(Entidade& vitima)const{
    try{
    int dano = ataque()+arma->get_dano() - vitima.get_defesaBase();
    if(dano < 0) throw out_of_range("ATAQUE BLOQUEADO\n"); //pontos de defesa sao maiores que o dano sofrido
    return dano;
    }
    catch(out_of_range &exce){
        return 0;
    }
}