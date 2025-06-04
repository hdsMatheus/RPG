#ifndef INVENTARIO_H
#define INVENTARIO_H
#include <vector>
#include "../Itens/Item.h"

#define MAX 10 //espaço maximo da mochila/inventario

class Inventario{
    private:
        vector <Item*> mochila;

    public:
        Inventario(){ mochila.reserve(MAX); };
        ~Inventario() { for (auto item : mochila) delete item; };

        bool inventario_vazio()const{ return mochila.empty();};
        bool inventario_cheio()const{ return mochila.size() >= MAX; };
        int get_inventario_espaco()const{ return mochila.capacity() ;};
        bool item_inserir(Item&);
        bool item_remover(Item&);
        void inventario_mostrar();

};

#endif