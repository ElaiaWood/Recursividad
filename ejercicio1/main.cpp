#include <iostream>
#include <cstdlib>

using namespace std;

/*
Escriba una definición recursiva de una función que tiene un parámetro n 
de tipo entero y que devuelve el n-ésimo número de Fibonacci. 
Los números de Fibonacci se definen de la siguiente manera:
F0 = 1
F1 = 1
Fi+2 = Fi + Fi+1
 */

long int fibonacci(int n1, int n2,int n3, int x){
    
    if(x==0){
        return n3;
    } else {
        n3 = n1 +n2;
        n1 =n2;
        n2=n3;
        return fibonacci(n1,n2,n3,x-1); 
    }
}
int main() {
    int n1 =0;
    int n2=1;
    int n3=0;
    int x;
    

    cout<<"Ingrese N numero: ";
    cin >> x;
   
      
    cout<<"El n-esimo numero de Fibonacci es: "<< fibonacci(n1,n2,n3,x-1)<<endl;
    return 0;
}

