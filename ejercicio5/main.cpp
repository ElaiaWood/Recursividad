/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: elias
 *
 * Created on 11 de marzo de 2022, 13:26
 */
#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */

long int sumaN(int x){
    if(x==2){
        return x;
    }
    return x+ sumaN(x-2);
}


int main() {
    int x;
    bool condition = false;
    do {
        
        cout<<"Ingrese un numero par positivo mayor a 2: "<<endl;
        cin >> x;
        if((x>2) && (x%2==0)){
            condition =true;
        }else if(x<=2){ 
            cout<<"Error: El numero ingresado debe ser mayor a dos\n";
        }else{
            cout<<"ERROR: el numero ingresado es impar\n";       
        }
    }while(condition == false);  

   cout << "Las cantidades de los numeros pares previos a N son: " << sumaN(x)<<endl;    
        
    return 0;
}

