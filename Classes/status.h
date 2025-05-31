#ifndef STATUS_H
#define STATUS_H

class Entidade;

class Status{
    public:
        void buffVida(Entidade& ent, int vida);
        void debuffVida(Entidade& ent, int vida);
        void buffDano(Entidade& ent, int dano);
        void debuffDano(Entidade& ent, int dano);
        void buffDefesa(Entidade& ent, int def);
        void debuffDefesa(Entidade& ent, int def);
};

#endif