#include "Esqueleto.h"
#include <stdexcept>
Esqueleto::Esqueleto(): Entidade{10, 4, 2}{//Iniciado como valores de teste (vida, ataque, defesa)
    Entidade_nome = "Esqueleto";
    //arma = new ARMA DO ESQUELETO(); LEMBRAR DE CRIAR A ARMA E ADICIONAR O .H 
} 

int Esqueleto::ataque()const{
    return ataqueBase * ((2+rand()%11)/10); //BALANCEAR
}

int Esqueleto::Dano_ataque(Entidade& vitima)const{
    try{
    int dano = ataque()+arma->get_dano() - vitima.get_defesaBase();
    if(dano < 0) throw out_of_range("");
    return dano;
    }
    catch(out_of_range &exce){
        return 0;
    }
}