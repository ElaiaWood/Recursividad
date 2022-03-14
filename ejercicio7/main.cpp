
/* 
Programe un método recursivo que transforme un número entero positivo 
a notación binaria.
 */
#include <iostream>
#include <cstdlib>


using namespace std;

void decbin(int n1){
    
    
    if(n1<2){
        cout<<n1;
        
    }else{
        decbin(n1/2);
        cout<<n1%2;
       
    }
    
}
int main() {
    
    int n1;
         
    cout<<"Ingrese un numero entero positivo: ";
    cin>>n1;
       
    decbin(n1);
    


}

