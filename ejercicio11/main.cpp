
#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */

static int f(int x){
    if (x >100){
	return (x-10);
    }else{
	return(f(f(x+11)));
    }
}

int main(int argc, char** argv) {

    int x;
    cout<<"Ingrese un valor: ";
    cin>>x;
    
    int resultado = f(x);
    
    if(resultado>100){
        cout<<"Todo valor entero superior de 100 ingresado"
                " es una resta de 10 digitos. El resultado de "
                "ingresar "<<x<<" es de: "<<resultado<<endl;
    } else {
        cout<<"Todo valor entero menor a 101 da 91. El resultado de "
                "ingresar "<<x<<" es de: "<<resultado<<endl;
    }
}

