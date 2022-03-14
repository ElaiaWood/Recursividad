#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */

int ncr(int n, int r){
    if(r==0 || r==n){
        return 1;
    } else{
        return ncr(n-1,r-1) + ncr(n-1,r);
    }
}

int main(){
    
    int n;
    int r;
    
    cout<<"Ingrese la cantidad de n para nCr"<<endl;
    cin>>n;
    cout<<"Ingrese la cantidad de r para nCr"<<endl;
    cin>>r;
    
    cout<<"Las combinaciones posibles son: "<<ncr(n,r)<<endl;
    
}