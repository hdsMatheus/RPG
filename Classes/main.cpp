
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