#ifndef EVENTO_ALEATORIO_H
#define EVENTO_ALEATORIO_H

#include <string>

using namespace std;

class Jogador;

class EventoAleatorio {
protected:
    string nome_evento;
    int chance_ocorrencia;
public:
    EventoAleatorio(string nome, int chance);
    virtual ~EventoAleatorio() = default;

    string get_nome_evento() const;
    int get_chance_ocorrencia() const;

    virtual bool executar_evento(Jogador& jogador) = 0;
};

#endif