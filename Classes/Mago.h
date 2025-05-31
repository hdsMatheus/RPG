#ifndef MAGO_H
#define MAGO_H
#include "Arma.h"
#include "Entidade.h"
#include "Graveto_do_aprendiz.h"

using namespace std;

class Mago : public Entidade{
    public:
        Mago(string);
        void equipar_arma(Arma* eqp){arma = eqp;}
};


#endif