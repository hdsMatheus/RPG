#ifndef DUNGEON_NORMAL_H
#define DUNGEON_NORMAL_H
#include "Dungeon.h"

class DungeonNormal : public Dungeon{
    public:
        DungeonNormal(){}  
        ~DungeonNormal(){ delete adversario; };
        float get_dungeon_recompensa();
        void dungeon_finalizar(){ idas--; multiplicador/=2;};
        Entidade* dungeon_get_inimigo(){ return adversario;};
        int dungeon_get_idas(){ return idas; };
};
#endif