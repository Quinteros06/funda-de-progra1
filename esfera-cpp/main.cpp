#include <iostream>
#include <math.h>

using namespace std;

int main(){
    
    float r=0, pi=3.1416;
    
    cout<<"Ingrese el valor del radio: "<<endl;
    cin>>r;
    cout<<"El area de la esfera es: "<<4*pi*pow(r,2)<<endl;
    cout<<"El perimetro es: "<<2*pi*r<<endl;
    
    return 0;
}
