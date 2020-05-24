#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int numero=0, numero1=0;
	
	cout<< "Ingrese el numero: "<<endl;
	cin>>numero;
	
	cout<< "Ingrese el numero: "<<endl;
	cin>>numero1;
	
	if(numero % numero1 == 0)
		cout<<"EL numero es divisible"<<endl;
		
	else
		cout<<"El numero no es divisible"<<endl;
	
	
	return 0;
}
