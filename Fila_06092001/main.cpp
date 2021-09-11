#pragma once
#include <iostream>
#include <array>
#include "Fila.h"

using namespace std;

int main() {

    cout << "\n Central de distribuicao - PEDA \n" << endl;

    TipoDado n;
    cout << "n = ";
    cin >> n;

    //Fila f0, f1, f2;
    //int v[3];
    //Fila f[3];

    array<Fila, 1> f;

    /*array<Fila, 3> f;

     while (n >= 0) {
        int ud = n % 10;
        if (ud > 0) {
            if (ud <= 3)
                f[0].insere(n);
            else if (ud <= 6)
                f[1].insere(n);
            else
                f[2].insere(n);
        }
        cout << "n = ";
        cin >> n;
    }*/
    while (n >= 0) {
        int ud = n % 10;
        if (ud > 0) {
            f[0].insere_pdesc(n);
        } else if (ud == 0) {
            f[0].insere_pdesc(n);
        }
        cout << "n = ";
        cin >> n;
    }
    for (int i = 0; i < 1; ++i) {
        cout << "\nf: " << endl;
        while (!f[i].vazia()) {
            cout << f[i].frente() << " ";
            f[i].remove();
        }
        cout << endl;
    }
    /*for (int i = 0; i < 3; ++i) {
        cout << "f" << i << ": ";
        while (!f[i].vazia()) {
            cout << f[i].frente() << " ";
            f[i].remove();
        }
        cout << endl;
    }*/
}