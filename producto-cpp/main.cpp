#include <iostream>
#include <math.h>

using namespace std;

int main(){
    
    string nombreproducto;
    int cantidad=0;
    float precio=0;
    
    
    cout<<"Ingrese el nombre del  producto que necesite: "<<endl;
    cin>>nombreproducto;
    cout<<"El precio del producto es: "<<endl;
    cin>>precio;
    cout<<"cantidad de producto: "<<endl;
    cin>>cantidad;
    cout<<"Monto gastado es: "<<cantidad*precio<<endl;
    
    return 0;
}