#include "Graveto_do_aprendiz.h"
#include "Mago.h"
#include "status.h"
#include <iostream>
using namespace std;
int main(){
    Status s;
    Mago p1("Nicolas");
    cout << "dano = " << p1.ataque() << endl << p1.get_armaEquipada_nome() << endl;
    Mago p2("F");
    cout << "Vida inicial " << p1.get_vidaBase() << endl;
    s.buffVida(p1, 10);
    cout << "Vida depois " << p1.get_vidaBase() << endl;
    cout << p1.Dano_ataque(p2);
}