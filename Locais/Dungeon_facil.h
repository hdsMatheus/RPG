#ifndef DUNGEON_FACIL_H
#define DUNGEON_FACIL_H
#include "Dungeon.h"

class DungeonFacil : public Dungeon{
    public:
        DungeonFacil(){}  
        ~DungeonFacil(){ delete adversario; };
        float get_dungeon_recompensa();
        void dungeon_finalizar(){ idas--; multiplicador/=2;};
        Entidade* dungeon_get_inimigo(){ return adversario;};
        int dungeon_get_idas(){ return idas; }
        Inimigo* get_adversario(){return adversario;};
};
#endif