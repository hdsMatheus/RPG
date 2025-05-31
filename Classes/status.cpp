#include "status.h"
#include "Entidade.h"

void Status::buffVida(Entidade& ent, int vida) { ent.vidaBase += vida; }
void Status::debuffVida(Entidade& ent, int vida) { ent.vidaBase -= vida; }
void Status::buffDano(Entidade& ent, int dano) { ent.ataqueBase += dano; }
void Status::debuffDano(Entidade& ent, int dano) { ent.ataqueBase -= dano; }
void Status::buffDefesa(Entidade& ent, int def) { ent.defesaBase += def; }
void Status::debuffDefesa(Entidade& ent, int def) { ent.defesaBase -= def; }