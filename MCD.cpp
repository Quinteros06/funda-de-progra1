#include <iostream>

using namespace std;

int main ()

{
int n1, n2, mcd, r;
cout << "Calcular el mcd." << endl;
cout << "Ingrese el primer numero: ";
cin >> n1;
cout << "Ingrese el segundo numero: ";
cin >> n2;

do{
    r= n1 % n2;
    
    if (r!= 0)
    {
    n1 = n2;
    n2 = r;
    }
    else
    {
    mcd= n2;
    } 

}while (r!= 0);
cout<<"El mcd es: "<<mcd;

 
    return 0;
}
