#ifndef FUNCOES_H
#define FUNCOES_H
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Armas/Arma.h"
#include "Entidades/Entidade.h"
#include "Locais/Dungeon.h"
#include "Entidades/Jogador.h"

using namespace std;

void mostrar_status_entidade(Entidade& entidade){
    cout <<"NOME: " << entidade.get_entidade_nome() << "VIDA: " << entidade.get_vidaBase() << endl << "DEFESA: " << entidade.get_defesaBase() << endl << "ATAQUE: " << entidade.get_ataqueBase();
}

void mostrar_status_batalha(Entidade& player, Entidade& inimigo){
    cout << "\tSEUS STATUS:" << "\t\t\tSTATUS DO INIMIGO:" << endl;
    cout <<"NOME: " << player.get_entidade_nome() << "\t\tNOME: " << inimigo.get_entidade_nome() << endl;
    cout <<"VIDA: " << player.get_vidaBase() << "\t\tVIDA: " << inimigo.get_vidaBase() << endl;
    cout <<"DEFESA: " << player.get_defesaBase() << "\t\tDEFESA: " << inimigo.get_defesaBase() <<  endl;
    cout <<"ATAQUE: " << player.get_ataqueBase() << "\t\tATAQUE: " << inimigo.get_ataqueBase() << endl;
}


void batalha(Jogador& player, Dungeon& dungeon){
    bool p_turno = true, d_turno = false;
    int turno = 1;
    while(player.get_jogador_classe()->get_vidaBase() > 0 || dungeon.get_adversario()->get_vidaBase() > 0){
        cout << "\t\tTURNO: " << turno;
        mostrar_status_batalha(*player.get_jogador_classe(), *dungeon.get_adversario());

        if(p_turno){
            //o jogador faz as coisas dele aqui
            p_turno = false;
            d_turno = true;
        }
        if(d_turno){
            //o inimigo faz as coisas dele aqui
            p_turno = true;
            d_turno = false;
        }
        system("cls"); //LIMPA A TELA DEPOIS DE CADA TURNO
    }
}

#endif