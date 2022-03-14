#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */


int sumaVector(int v[], int c, int t){
    
    t = t + v[c];
    if(v[c]==10){
        return t;
    } else {
        c++;
        return sumaVector(v,c,t);
    }
    
    
}

int main() {

    int  arreglo[10] = {};
    int x;
    int c=0;
    int t=0;
    for (int i = 0; i <= 9; i++) {
        cout<<"Ingrese un numero"<<endl;
        cin >> arreglo[i];
    }
    
    cout<<"La suma de todo el arreglo es: "<< sumaVector(arreglo,c,t) <<endl;


    
    return 0;
}

