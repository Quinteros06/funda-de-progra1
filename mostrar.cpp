#include  <iostream>
# include  <math.h>

using namespace std;

int  main () {
	
    int numero[ 2 ];
    int num;
    for( int i = 0 ; i < 2 ; i ++) {
    	cout<<"Ingresa el numero: ";
        cin >>num;
        numero[i] = num;
    }
    for ( int i = 0 ; i < 2 ; i ++) {
        cout << " El numero es: " <<numero[i]<< endl;
    }
    if(numero[0]==numero[1]){
    	cout<<"El numero se repite 2 veces";
	}else{
		cout<<"El numero no se repite";
	}
    return 0;
}
