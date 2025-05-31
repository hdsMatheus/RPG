#include "Graveto_do_aprendiz.h"
#include "Mago.h"
#include <iostream>
using namespace std;
int main(){
    Mago p1("Nicolas");
    cout << "dano = " << p1.ataque() << endl << p1.get_armaEquipada_nome() << endl;
    Mago p2("F");

    cout << p1.Dano_ataque(p2);
}