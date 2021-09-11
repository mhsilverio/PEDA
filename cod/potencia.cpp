#include<iostream>
#include<cstring>

using namespace std;

double pot(double u, int v){             // CASO RECURSIVO
    if (v==0)
        return 1;
    else
        return u * pot(u,v-1);
}

int main(){
    int res = pot(2, 5);
    cout << "\nO resultado da potencia esperada: " << res << endl;

    return 0;
}