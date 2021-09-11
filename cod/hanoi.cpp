// MILENA HELOÍSA DE AMORIM SILVÉRIO

#include<iostream>
#include<cstring>

using namespace std;

void hanoi(int n, char orig, char dest, char aux){
    if (n==1)
        cout << "Mova disco " << n << " de " << orig << " para " << dest << endl;
    else { 
        // Passo 1: mover n-1 discos de torre origem para torre auxiliar
        // Passo 2: mover o disco N de torre origem para torre destino
        // Passo 3: mover n-1 discos de torre auxiliar para torre destino
        hanoi(n-1, orig, aux, dest);
        cout << "Mova disco " << n <<  " de " << orig << " para " << aux << endl;
        hanoi(n-1, aux, dest, orig);
    }
}

int main(){
    int num;
    cout << "\nQuantos discos tem o jogo Torre de Hanoi? ";
    cin >> num;
    cout << "\nRESULTADO DOS MOVIMENTOS: " << endl;
    hanoi(num,'A','B','C');
}