#include "Assalto.h"
#include "../Entidades/Jogador.h"
#include <iostream> 

using namespace std;

Assalto::Assalto() : EventoAleatorio("Assalto", 20) {} // 20% de chance de assalto

bool Assalto::executar_evento(Jogador& jogador) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(1, 100);

    if (distrib(gen) <= chance_ocorrencia) {
        cout << "\nVOCE FOI EMBOSCADO SAINDO DA DUNGEON!\n";
        cout << "Um grupo de assaltantes te aborda!\n";

        int dinheiro_jogador = jogador.get_jogador_dinheiro();
        if (dinheiro_jogador == 0) {
            cout << "Voce nao tem dinheiro para ser roubado! Os assaltantes te deixam em paz.\n";
            return false;
        }

        uniform_int_distribution<> percent_distrib(15, 25);
        double percent_roubado = static_cast<double>(percent_distrib(gen)) / 100.0;
        int dinheiro_roubado = static_cast<int>(dinheiro_jogador * percent_roubado);

        // Garantir que pelo menos 1 moeda seja roubada se o jogador tiver dinheiro
        if (dinheiro_roubado == 0 && dinheiro_jogador > 0) {
            dinheiro_roubado = 1;
        }

        jogador.set_jogador_dinheiro(-dinheiro_roubado); // Diminuir o dinheiro do jogador
        cout << "Voce perdeu " << dinheiro_roubado << " moedas de ouro no assalto!\n";
        cout << "Dinheiro restante: " << jogador.get_jogador_dinheiro() << " moedas de ouro.\n";
        return true;
    }
    return false;
}