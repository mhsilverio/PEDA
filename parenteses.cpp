#include <iostream>
#include <string>

using namespace std;

int main() {
    string exp;
    cout << "Digite a expressao: ";
    cin >> exp;

    int cont = 0;

    for(int i=0; i<exp.size(); ++i){
        switch(exp[i]){
            case '(':
                ++cont;
                break;
            case ')':
                 --cont;
                if(cont < 0)
                    i = exp.size();
                break;
        }
    }
    if (cont == 0)
        cout << "Expressao correta" << endl;
    else    
        cout << "Expressao incorreta" << endl;
}
