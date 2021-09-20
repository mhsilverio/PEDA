#include<iostream>

using namespace std;

class Carro{
private:
    int veloc = 0;
public:
    Carro() {
        cout << "Carro criado!" << endl;
    }
    Carro(int v0) {
        veloc = v0;
        cout << "Carro Criado com velocidade " << v0 << endl;
    }
    ~Carro(){
        cout << "Destruindo carro" << endl;
    }
public:
    void acelera(){
        veloc += 10;
    }
    void freia(){
        veloc -= 10;
        if (veloc <0)
            veloc = 0;
    }
    int velocimetro(){
        return veloc;
    }
};

int main(){
    Carro fusca;
    Carro mareia(40);

    fusca.acelera();
    mareia.freia();

    cout << "velocimetro fusca: " << fusca.velocimetro() << endl;
    cout << "velocimetro mareia: " << mareia.velocimetro() << endl;
}