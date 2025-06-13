#ifndef DUNGEON_DIFICIL_H
#define DUNGEON_DIFICIL_H
#include "Dungeon.h"

class DungeonDificil : public Dungeon{
    public:
        DungeonDificil(){}  
        ~DungeonDificil(){ delete adversario; };
        float get_dungeon_recompensa();
        void dungeon_finalizar(){ idas--; multiplicador/=2;};
        Entidade* dungeon_get_inimigo(){ return adversario;};
        int dungeon_get_idas(){ return idas; };
};
#endif