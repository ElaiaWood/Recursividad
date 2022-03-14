
/* 
Implemente una función recursiva que nos diga si una cadena es palíndromo.
 */

#include <iostream>
#include <cstdlib>
#include <string.h>
#include <cstring>

using namespace std;


string palindromo(string palabra, int total, int i, int x,int z){
     
    if( z==1){
        return "La palabra es palíndromo";
    }else if(z==2){
        return "La palabra NO es palíndromo";
    }
    
    if(i<total){
        if(palabra[i]==palabra[total-1-i]){
            return palindromo(palabra,total,i+1,x,z);
        } else {
            z=2;
            return palindromo(palabra,total,i,x,z);
        }
    } else {
        z=1;
        return palindromo(palabra,total,i,x,z);
    }
}

int main() {
    int i=0;
    int total;
    bool x;
    int z=0;
    string palabra;
    cout<<"Ingrese una palabra palindroma: ";
    cin >> palabra;
    total=palabra.size();
    
    for (int i = 0; i < total; i++) {
        palabra[i] = tolower(palabra[i]);

    }

    
    cout<<palindromo(palabra,total,i,x,z);

}

