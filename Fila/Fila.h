#pragma once
//#include <array>

#ifndef FILA_H
#define FILA_H

const int MAXFILA = 10;
using TipoDado = int;

class Fila {
private:
    // std::array<TipoDado, MAXFILA> dados;
    TipoDado dados[MAXFILA];
    int frente_;
    int fim;

public:
    Fila();
    void insere(TipoDado elemento);
    void insere_pdesc(TipoDado elemento);
    TipoDado frente();
    void remove();
    bool vazia();
    bool cheia();
};
#endif
#pragma once
