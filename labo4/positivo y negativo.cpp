#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	int numero=0;
	
	cout<< "Ingrese el numero: "<<endl;
	cin>>numero;
	
	if(numero>0)
		cout<<"EL numero es positivo"<<endl;
		
	else if (numero<0)
		cout<<"El numero es negativo"<<endl;
		
	else if (numero==0)
		cout<<"El numero es cero"<<endl;
	
	
	return 0;
}
