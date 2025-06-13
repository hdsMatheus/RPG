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

void mostrar_status_batalha(Jogador& player, Entidade& inimigo){ //recebe um jogador e um inimigo como parametro
    cout << "\tSEUS STATUS:" << "\t\t\tSTATUS DO INIMIGO:" << endl;
    cout <<"NOME: " << player.get_jogador_nome() << "\t\t\tNOME: " << inimigo.get_entidade_nome() << endl;
    cout <<"VIDA: " << player.get_jogador_classe()->get_vidaBase() << "\t\t\tVIDA: " << inimigo.get_vidaBase() << endl;
    cout <<"DEFESA: " << player.get_jogador_classe()->get_defesaBase() << "\t\t\tDEFESA: " << inimigo.get_defesaBase() <<  endl;
    cout <<"ATAQUE: " << player.get_jogador_classe()->get_ataqueBase() << "\t\t\tATAQUE: " << inimigo.get_ataqueBase() << endl;
}


void batalha(Jogador& player, Dungeon& dungeon){ 
    bool p_turno = true, d_turno = false; // o jogador começa jogando 
    int turno = 1;
    while(player.get_jogador_classe()->get_vidaBase() > 0 && dungeon.get_adversario()->get_vidaBase() > 0){
        cout << "\t\tTURNO: " << turno;
        mostrar_status_batalha(player, *dungeon.get_adversario());

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