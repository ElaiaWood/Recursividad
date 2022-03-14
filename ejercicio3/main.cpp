#include <iostream>
#include <cstdlib>

using namespace std;

/*
 Escriba una función recursiva que ordene de menor a mayor un arreglo de enteros
 basándose en la siguiente idea: coloque el elemento más pequeño en la primera
 ubicación, y luego ordene el resto del arreglo con una llamada recursiva.
 */

int* ordenarV(int arreglo[],int aux,int a, int i,int j){
    if(j<a){
        if(i<a){
            if(arreglo[i]>arreglo[i+1]){
                swap(arreglo[i],arreglo[i+1]);
                return ordenarV(arreglo,aux,a,i+1,j);
            }else{
                return ordenarV(arreglo,aux,a,i+1,j);
            }
        } else{
            return ordenarV(arreglo,aux,a,i=0,j+1);
        }   
    } else if(i==a){
        return arreglo;
    }
}
        


int main() {
    //Contadores
    
    int i=0; //Arreglo interno
    int j=0; //Cantidad de vueltas por tamanio de posicion
    //Auxiliar
    int aux = 0;
    //Size de vector
    int a;
    
    //Ingreso de datos
    cout<<"Ingrese la canditdad de numeros en el arreglo: "<<endl;
    cin >> a;
    
    //Creando mis arreglos
    int arreglo[a];
   
     
    //Asignando posciones
    for (int y = 0; y <a; y++) {
        cout<<"Ingrese un numero: "<<endl;
        cin >> arreglo[y];
    }
    
    //Llamado del metodo
    ordenarV(arreglo,aux,a-1,i,j);
     
   //Impresion del arreglo ordenado
    for (int z = 0; z <a; z++) {
        cout<<"T: "<< arreglo[z]<<endl;
    }

    return 0;
}

