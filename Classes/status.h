#ifndef STATUS_H
#define STATUS_H

#include "Entidade.h"

class Status{
    public:
        void buffVida(Entidade& ent, int vida){ent.vidaBase+vida;}
        void debuffVida(Entidade& ent, int vida){ent.vidaBase-vida;}
        void buffDano(Entidade& ent, int dano){ent.ataqueBase+dano;}
        void debuffDano(Entidade& ent, int dano){ent.ataqueBase-dano;}
        void buffDefesa(Entidade& ent, int def){ent.defesaBase+def;}
        void debuffDano(Entidade& ent, int def){ent.defesaBase-def;}
};

#endif