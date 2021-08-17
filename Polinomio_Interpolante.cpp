#include <iostream>
#include <math.h>
using namespace std;

// Segunda modificación

int main() {
    int m, n, i, j;
    // tercerca modificacion
    int valorX = 10;
    int valorY = 20;
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
    //-------------- Commits realizados: ------------------
    // First
    cout << "El valor de y es: " << y;

    // Second
    // cout << "Y tiene el valor de : " << y;

    // Third
    // cout << "y = : " << y;


}