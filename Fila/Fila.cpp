#include <iostream>
#include "Fila.h"

using namespace std;

int anterior(int i) {
    if (i == 0)
        return MAXFILA - 1;
    else
        return i - 1;
}

int prox(int i) {
    /*if (i == MAXFILA - 1)
        return 0;
    else
        return i + 1;*/
    return (i + 1) % MAXFILA;
}

Fila::Fila() {
    frente_ = fim = MAXFILA - 1;
}

void Fila::insere(TipoDado elemento) {
    if (!cheia()) {
        fim = prox(fim);
        dados[fim] = elemento;
    } else cerr << "FILA CHEIA!" << endl;
}

void Fila::insere_pdesc(TipoDado elemento) {
    if (!cheia()) { //busca posi��o i para inserir elemento
        int pos = prox(frente_); // frente_ � o que procede o da frente
        fim = prox(fim);

        while (pos != prox(fim) && dados[pos] >= elemento) {
            pos = prox(pos);
        }
        int fim_ = fim;

        while (fim_ != pos) { //abre espa�o para inser��o do elemento na posi��o i
            dados[fim_] = dados[anterior(fim_)];
            fim_ = anterior(fim_);
        }
        dados[pos] = elemento; //insere elemento na posi��o i (insere elemento na posi��o certa)
    } else cerr << "FILA CHEIA!" << endl;
}

TipoDado Fila::frente() {
    if (vazia()) {
        cerr << "FILA VAZIA!" << endl;
        return -1;
    }
    else return dados[prox(frente_)];
}

void Fila::remove() {
    if (!vazia()) {
        frente_ = prox(frente_);
    }
}

bool Fila::vazia() {
    return (frente_ == fim);
}

bool Fila::cheia() {
    return (frente_ == prox(fim));
}