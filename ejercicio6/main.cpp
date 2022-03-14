
/*
 * Escribir un programa que calcule el máximo común divisor (MCD) de dos enteros
positivos. Si M >= N una función recursiva para MCD es
MCD = M si N =0
MCD = MCD (N, M mod N) si N <> 0
El programa le debe permitir al usuario ingresar los valores para M y N desde 
la consola. Una función recursiva es entonces llamada para calcular el MCD. 
El programa entonces imprime el valor para el MCD. Si el usuario ingresa un 
valor para M que es < que N el programa es responsable de switchear los valores.

 */
#include <iostream>
#include <cstdlib>

using namespace std;

int mcd(int M, int N){
    if(N==0){
        return M;
    }
    
    if(M>=N){
        return mcd(N,M%N);
    } else {
        swap(M,N);
        return mcd(M,N);
    }    
}

int main(int argc, char** argv) {
    
    int M;
    int N;
    
    cout<<"Para obtener el MCD proporcione dos números"<<endl;
    cout<<"Ingrese el dato de A: ";
    cin >>M;
    cout<<"Ingrese el dato de B: ";
    cin >>N;
    
    cout<<"El MCD es: "<< mcd(M,N)<<endl;
       
    return 0;
}

