#include "Evento_aleatorio.h"

using namespace std;

EventoAleatorio::EventoAleatorio(string nome, int chance)
    : nome_evento(nome), chance_ocorrencia(chance) {}

string EventoAleatorio::get_nome_evento() const {
    return nome_evento;
}

int EventoAleatorio::get_chance_ocorrencia() const {
    return chance_ocorrencia;
}