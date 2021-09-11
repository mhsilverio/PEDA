#include<iostream>
#include<cstring>

using namespace std;

int mdc(int u, int v){             // CASO RECURSIVO
    if (u == v)
        return u;
    else if (u < v)
            return mdc(u, v-u);
        else
            return mdc(v, u-v); 
}

int main(){
    int res = mdc(461952, 116298);
    cout << "\nMDC: " << res << endl;
    
    return 0;
}