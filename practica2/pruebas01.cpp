//*****************************************************************
// File:   pruebas01.cpp
// Author: Programación II. Universidad de Zaragoza
// Date:   febrero 2021
// Coms:   Programa de pruebas del comportamiento de las funciones
//         definidas en el módulo calculos
//         Para la práctica 2
//*****************************************************************

#include <iostream>
#include "calculos.hpp"

using namespace std;


// Pre:  <cifra> es el número de cifras de <n> cuando se escribe en base <b>
//       y <b> está comprendido entre 2 y 10
// Post: Informa si el valor devuelto al ejecutar numCifras(n, b) es igual
//       a <cifras> o no lo es
void probarNumCifras(const int n, const int b, const int cifras) {
    int r = numCifras(n, b);
    if (r == cifras) {
        cout << "Ok. numCifras(" << n << "," << b << ") = " << r << endl;
    } else {
        cout << "Mal. numCifras(" << n << "," << b << ") = " << r << "  pero debiera ser "
             << cifras << endl;
    }
}


// Prueba el comportamiento de numCifras(n,10) para los siguientes valores de n:
// 0, 1, 9, 10, 99, 100, 999, 1000, ... , 99999, 100000, 99999 y 1000000
// y prueba el comportamiento de numCifras(n,2) para los siguientes valores de n:
// 0, 1, 1, 2, 3, 4, 7, 8, 15, 16, 31, 32, ..., 4095, 4096, 8191 y 8192
void probarNumCifras() {
    // Prueba el comportamiento de numCifras(n) para los siguientes valores de n:
    // 0, 1, 9, 10, 99, 100, 999, 1000, ..., 99999, 100000, 99999 y 1000000
    probarNumCifras(0, 10, 1);
    probarNumCifras(1, 10, 1);
    int n = 10;
    int cifras = 2;
    while (n <= 1000000) {
        probarNumCifras(n - 1, 10, cifras-1);
        probarNumCifras(n, 10, cifras);
        n = 10 * n;
        cifras = cifras + 1;
    }
    cout << endl;
    // Prueba el comportamiento de numCifras(n,2) para los siguientes valores de n:
    // 0, 1, 1, 2, 3, 4, 7, 8, 15, 16, 31, 32, ..., 4095, 4096, 8191 y 8192
    probarNumCifras(0, 2, 1);
    probarNumCifras(1, 2, 1);
    n = 2;
    cifras = 2;
    while (n <= 10000) {
        probarNumCifras(n - 1, 2, cifras-1);
        probarNumCifras(n, 2, cifras);
        n = 2 * n;
        cifras = cifras + 1;
    }
    cout << endl;
}


// Pre:  <n> es el número natural y <b> está comprendido entre 2 y 10
// Post: Informa si los valores devueltos al ejecutar cifra(n, i, b) corresponden
//       o no a la i-ésima cifra de <n>, cuando este número se escribe en base <b>
void probarCifra(const int n, const int i, const int b, const int laCifra) {

    int r =  cifra(n, i, b);

    if (r == laCifra)
    {
        cout << "Ok! cifra(" << n << ", " << i << ", " << b << ") = " << laCifra << endl;
    }
    else {
        cout << "Mal! cifra(" << n << ", " << i << ", " << b << ") = " << r <<
                " pero debiera ser " << laCifra << endl;
    }
}


// Prueba el comportamiento de cifra(n,i,b) para diferentes números naturales
// en las bases de numeración 2 y 10
void probarCifra() {
}


// Pre:  <n> es el número natural y <b> está comprendido entre 2 y 10 y <laMayor> es
//       el valor de la mayor de las cifras de <n> cuando se escribe en base <b>
// Post: Informa si el valor devuelto al ejecutar cifraMayor(n, b) coincide con el
//       de <laMyor>, cuando <n> se escribe en base <b>
void probarCifraMayor(const int n, const int b, const int laMayor) {

    int r =  cifraMayor(n, b);

    if (r == laMayor)
    {
        cout << "Ok! cifraMayor(" << n << ", " << b << ") = " << laMayor << endl;
    }
    else {
        cout << "Mal! cifraMayor(" << n << ", " << b << ") = " << r <<
                " pero debiera ser " << laMayor << endl;
    }
}


// Prueba el comportamiento de cifraMayor(n,b) para diferentes números naturales
// en las bases de numeración 2, 8 y 10
void probarCifraMayor(const int n, const int b) {
}


// Pre:  <n> es el número natural y <b> está comprendido entre 2 y 10 y <laMasSignificativa>
//       es el valor de cifra más significativa de <n> cuando se escribe en base <b>
// Post: Informa si el valor devuelto al ejecutar cifraMasSignificativa(n, b) coincide
//       con el de <laMasSignificativa>, cuando <n> se escribe en base <b>
void probarCifraMasSignificativa(const int n, const int b, const int laMasSignificativa) {

    int r =  cifraMasSignificativa(n, b);

    if (r == laMasSignificativa)
    {
        cout << "Ok! cifraMasSignificativa(" << n << ", " << b << ") = " << laMasSignificativa << endl;
    }
    else {
        cout << "Mal! cifraMasSignificativa(" << n << ", " << b << ") = " << r <<
                " pero debiera ser " << laMasSignificativa << endl;
    }

}


// Prueba el comportamiento de cifraMasSignificativa(n,b) para diferentes números naturales
// en las bases de numeración 2, 8 y 10
void probarCifraMasSignificativa() {
}


// Pre:  <n> es el número natural y <b> está comprendido entre 2 y 10 y <laSuma> es
//       el valor de las cifras de <n> cuando se escribe en base <b>
// Post: Informa si el valor devuelto al ejecutar sumaCifras(n, b) coincide
//       con el de <laSuma>, cuando <n> se escribe en base <b>
void probarSumaCifras(const int n, const int b, const int laSuma) {
    int r =  sumaCifras(n, b);

    if (r == laSuma)
    {
        cout << "Ok! sumaCifras(" << n << ", " << b << ") = " << laSuma << endl;
    }
    else {
        cout << "Mal! sumaCifras(" << n << ", " << b << ") = " << r <<
                " pero debiera ser " << laSuma << endl;
    }
}


// Prueba el comportamiento de probarSumaCifras(n,b) para diferentes números naturales
// en las bases de numeración 2, 8 y 10
void probarSumaCifras() {
}


// Ejecuta una secuencia de pruebas de las funciones definidas
// en el módulo cálculos
int main() {
    // Pruebas del comportamiento de numCifras(n,b)
    probarNumCifras (123, 10, 3);
    probarNumCifras();
    cout << endl;
    // Pruebas del comportamiento de cifra(n,i,)
    probarCifra(1, 1, 10, 1);
    probarCifra(21, 1, 10, 1);
    probarCifra(824, 3, 10, 8);
    probarCifra(1027, 2, 10, 2);
    probarCifra(4, 1, 2, 0);
    probarCifra(5, 3, 2, 1);
    probarCifra(8, 4, 2, 1);

    cout << endl;
    // Pruebas del comportamiento de cifraMayor(n,b)
    probarCifraMayor(1, 10, 1);
    probarCifraMayor(15, 10, 5);
    probarCifraMayor(1123, 10, 3);
    probarCifraMayor(92, 10, 9);
    probarCifraMayor(1, 2, 1);
    probarCifraMayor(8, 2, 1);

    cout << endl;
    // Pruebas del comportamiento de cifraMasSignificativa(n,b)
    probarCifraMasSignificativa(1, 10, 1);
    probarCifraMasSignificativa(12, 10, 1);
    probarCifraMasSignificativa(32, 10, 3);
    probarCifraMasSignificativa(578452, 10, 5);
    probarCifraMasSignificativa(4, 2, 1);

    cout << endl;
    // Pruebas del comportamiento de sumaCifras(n,b)
    probarSumaCifras(4, 2, 1);
    probarSumaCifras(5, 2, 2);
    probarSumaCifras(10, 10, 1);
    probarSumaCifras(32, 2, 1);
    probarSumaCifras(1245, 10, 12);

    cout << endl;
    // Fin del programa de pruebas
    return 0;
}
