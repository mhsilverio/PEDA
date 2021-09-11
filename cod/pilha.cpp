#include <iostream>
#include <string>
#include <array>
#include <vector>

using namespace std;

constexpr int MAXPILHA = 10;
using TipoDado = int;           // em C: typedef int TipoDado;

//------------------------ Pilha.h

class Pilha {
private:
    TipoDado dados[MAXPILHA];    // array<TipoDado,MAXPILHA> dados;
    int topo_;
public:                         // construtor
    Pilha();
    void push(TipoDado elem);
    void pop();
    TipoDado topo(); //retorna
    bool vazia(); //retorna verdadeito/falso
    bool cheia();
};
//------------------------ 

int main() {
    Pilha p;

    p.push(5);
    p.push(10);
    p.push(15);

    while (!p.vazia()){
        cout << p.topo() << endl;
        p.pop();  
    }   

    //Exercício: problema do abre/fexha parenteses usando uma pilha
}

//------------------------ Pilha.cpp

Pilha::Pilha(){  //Não são independentes, sao métodos pertencentes a classe 
    topo_ = -1;
}

void Pilha::push(TipoDado elem){ //leva pro topo da pilha
    if(!cheia()){
        ++topo_;
        dados[topo_] = elem;
    } else
    cerr << "Pilha cheia!" << endl;
}

void Pilha::pop(){    //tira o elem do topo da pilha
    if(!vazia()){
        --topo_;
    } else
    cerr << "Pilha vazia!" << endl;
}

TipoDado Pilha::topo(){  
    if (!vazia())       // não vazia?
        return dados[topo_];
    else {
        cerr << "Pilha vazia!" << endl;
        return -1;
    }
}

bool Pilha::vazia(){
    return (topo_ == -1);

    //if(topo_ == -1)
    //    return true;
    //else 
    //    return false;
}

bool Pilha::cheia(){
    return (topo_ == MAXPILHA -1);

    //if(topo_ == MAXPILHA -1)
    //   return true;
    //else
    //    return false;
}