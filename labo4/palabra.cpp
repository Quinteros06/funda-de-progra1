#include <iostream>
#include <string>
#include <windows.h>

using namespace std;


int main(){
	
    string palabra1 = "";
    cout<<"Ingrese la palabra: ";
	cin>>palabra1;
    int palabra =palabra1.length();
    
    if (palabra1.at(0)==palabra1.at(palabra-1)){
        cout<<"La palabra inicia y finaliza con la misma letra"<<endl;
    }else
       cout<<"No inicia ni finaliza con la misma letra "<<endl;
	
	return 0;
}

