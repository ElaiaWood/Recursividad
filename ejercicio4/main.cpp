
/* 
Escribir una función recursiva que devuelva la suma de los primeros N enteros
 */
#include <iostream>
#include <cstdlib>

using namespace std;


long int sumaN(int x){
    if(x==1){
        return x;
    } else {
        return x + sumaN(x-1);
    }
}

int main() {
    int x;
    cout<<"Ingrese N numero: ";
    cin >> x;
    cout<<"La suma de los numeros comprendidos hasta "<< x<<" es: "<< sumaN(x) <<endl;    
    return 0;
}

