// Codigo_Polinomio interpolante.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std;


int main() {
    int m, n, i, j;
    float a[101][3], y, productoria, aux, x;
    a[1][1] = -3;
    a[2][1] = 5;
    a[3][1] = 7;
    a[4][1] = 8;

    a[1][2] = 9;
    a[2][2] = 2;
    a[3][2] = -1;
    a[4][2] = 0;
    m = 4;
    // Se ingresa los datos
    cout << "Ingrese el numero a interpolar: ";
    cin >> x;
    /*
    cout <<"Ingrese el numero de pares de datos: ";
    cin>>m;
    n = m-1;
    i = 1;
    cout <<"Ingrese los datos en pares: "<<endl;;
    do{
      cin>>a[i][1]>>a[i][2];
      i++;
    }while(i<=m);
    cout << "Hello World!\n";

  */
  // Se muestra los datos 
    cout << "Los datos quedan de la siguiente manera: " << endl;;
    cout << "  X  |   Y" << endl;
    cout << "----------- " << endl;
    i = 1;
    do {
        cout << a[i][1] << "       " << a[i][2] << endl;
        i++;
    } while (i <= m);


    // se procede a calcular con el metodo
    y = 0; // sumatoria
    productoria = 1;
    j = 1;

    for (i = 1; i <= m; i++) {

        productoria = 1;
        for (j = 1; j <= m; j++) {
            if (i != j) {
                aux = (x - a[j][1]) / (a[i][1] - a[j][1]);
                productoria = productoria * aux;
            }
        }
        // despues de break
        y = y + (a[i][2] * productoria);

    }

    cout << "El valor de y es: " << y;


}