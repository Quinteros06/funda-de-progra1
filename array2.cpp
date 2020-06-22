#include <iostream>
#include <conio.h>

using namespace std;

int arreglo(int array1[], int b)
{
for (int i = 0; i < b; i++)
{
    cout << "ingrese el numero en la posicion " << i << " del arreglo 1: ";
    cin >> array1[i]; 

}return array1[b];
}

int arreglo2(int array2[], int b)
{
    for (int i = 0; i < b; i++)
    {
        cout << "Ingrese el numero en la posicion " << i << " del arreglo 2: ";
        cin >> array2[i];
    
    }return array2[b];
}

int arreglos(int array1[], int array2[], int b, int suma[])
{
    for (int i = 0; i < b; i++)
    {
        suma[i] = array1[i] + array2[i]; 
    }return suma[b];
}

int mostrar(int suma[], int b)
{
     cout << "La suma de los arreglos es de: ";
    for (int i= 0; i < b; i++){
        cout << suma[i]<< "\t";
    }
}

int main ()
{
    int b;
    cout<<"Por favor ingrese el size de los arreglos: ";
    cin >> b;
    
    int array1[b];
    int array2[b];
    int suma[b];

    arreglo(array1, b);
    cout << endl;
    arreglo2(array2, b);
    arreglos(array1,array2,b,suma);
    mostrar(suma, b);
}
