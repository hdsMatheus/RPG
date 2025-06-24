<<<<<<< HEAD
#include "../Armas/Graveto_do_aprendiz.h"
#include "../Entidades/Mago.h"
#include "../Armas/Espada_enferrujada.h"
#include <iostream>
#include "../Outros/Inventario.h"
#include "../Entidades/Jogador.h"
#include "../Armas/Arma.h"
#include "../Entidades/Guerreiro.h"
#include "../funcoes.h"
#include "../Entidades/Esqueleto.h"


using namespace std;
int main(){
    // cout << "Insira seu nome: ";
    // string nome;
    // cin >> nome;
    Entidade *m = new Mago();
    Entidade *g = new Guerreiro();
    Jogador p1{"Jogador 1", m};
    Jogador p2{"Jogador 2", g};
    // cout << "\nNome: " << p1.get_jogador_nome() << endl << "Classe: " << p1.get_jogador_classe_nome() << endl;
    // Graveto_do_aprendiz item1;
    // Espada_enferrujada item2;

    // if(p1.mochila_vazia()) cout << "MOCHILA VAZIA\n"; 
    // p1.mochila_inserir(item1);
    // p1.mochila_inserir(item2);
    // p1.mochila_mostrar();
    // p1.mochila_remover(item1);
    // p1.mochila_mostrar();
    // cout << "DANO: " << p1.get_jogador_classe()->ataque();//da pra atacar usando a funcao get_jogador_classe
    mostrar_status_batalha(p1, *p2.get_jogador_classe());
}
=======

#include <iostream>
#include "Guerreiro.h"
#include "Espada_enferrujada.h"
using namespace std;

int main() {
    Guerreiro g1("Jonas");
    Guerreiro g2("Emannuel");

    cout << "Guerreiro 1: " << g1.get_nome() << " com arma " << g1.get_armaEquipada_nome() << endl;
    cout << "Ataque base: " << g1.ataque() << endl;

    cout << "Dano causado ao Guerreiro 2: " << g1.Dano_ataque(g2) << endl;

    return 0;
}

/*
#include <iostream>
#include "Inimigo.h"
#include "Mago.h"

using namespace std;

int main() {

    Inimigo inimigo("Big");

    Mago mago("Davi");

    cout << "Inimigo: " << inimigo.get_nome() << endl;
    cout << "Arma do inimigo: " << inimigo.get_armaEquipada_nome() << endl;
    cout << "Vida do mago antes do ataque: " << mago.get_vidaBase() << endl;

    int dano = inimigo.Dano_ataque(mago);
    cout << "Dano causado pelo inimigo ao mago: " << dano << endl;

    return 0;
}
*/
>>>>>>> aa04084da92865239ec61dc96cdbf881a1b2462f
