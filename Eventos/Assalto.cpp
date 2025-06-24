#include "Assalto.h"
#include "../Entidades/Jogador.h"
#include <iostream>
#include <random>

using namespace std;

Assalto::Assalto() : EventoAleatorio("Assalto", 20) {} // 20% de chance

bool Assalto::executar_evento(Jogador& jogador) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 100);

    if (distrib(gen) <= chance_ocorrencia) {
        cout << "\n[!!!] EMBOSCADA AO SAIR DA DUNGEON!\n";
        cout << "Um grupo de assaltantes te aborda!\n";

        int dinheiro_jogador = jogador.get_jogador_dinheiro();
        if (dinheiro_jogador <= 0) {
            cout << "Voce nao tem dinheiro para ser roubado. Os assaltantes te deixam em paz.\n";
            return false;
        }

        uniform_int_distribution<> percent_distrib(15, 25);
        double percent_roubado = static_cast<double>(percent_distrib(gen)) / 100.0;
        int dinheiro_roubado = static_cast<int>(dinheiro_jogador * percent_roubado);

        if (dinheiro_roubado < 1) {
            dinheiro_roubado = 1;
        }

        int novo_dinheiro = dinheiro_jogador - dinheiro_roubado;
        if (novo_dinheiro < 0) {
            dinheiro_roubado = dinheiro_jogador;
            novo_dinheiro = 0;
        }

        jogador.set_jogador_dinheiro(novo_dinheiro);

        cout << "Voce perdeu " << dinheiro_roubado << " moedas de ouro no assalto.\n";
        cout << "Dinheiro restante: " << jogador.get_jogador_dinheiro() << " moedas de ouro.\n";
        return true;
    }

    return false;
}
