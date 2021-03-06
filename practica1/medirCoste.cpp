#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include "ordenar.hpp"

using namespace std;

/* Pre: r <= s
 * Post: randDouble(r, s) = I ∧ r <= I <= s
 */
int randInt(const int a, const int b) {

    //time_t semilla = time(nullptr);
    //srand(semilla);

    return a + rand() % (b - a + 1);
}

/* Pre: #v >= 20
 * Post: Ha mostrado por salida estándar los 20 primeros componentes
 *       del vector v.
 */
void mostrar20primeros(const int v[]) {

    int index = 0;

    for (int i = 0; i < 2; i++)
    {
        cout << endl;

        for (int j = 0; j < 10; j++)
        {
            cout << setw(6) << v[index];
            index++;
        }
        
    }
    
}

/* Pre: #v >= 20 ⋀ n = #v
 * Post: Ha mostrado por salida estándar los 20 últimos componentes
 *       del vector v.
 */
void mostrar20ultimos(const int v[], int n) {

    int index = n - 20;

        for (int i = 0; i < 2; i++)
        {
            cout << endl;

            for (int j = 0; j < 10; j++)
            {
                cout << setw(6) << v[index - 1];
                index++;
            }
            
        }


}



int main(int argc, char* argv[]){

    srand(time(nullptr));

    int datosGenerar = atoi(argv[1]);
    int min = atoi(argv[2]);
    int max = atoi(argv[3]);
    int numFilas = datosGenerar / 10;

    int v[100000];

    for (int i = 0; i < datosGenerar; i++)
    {
        v[i] = randInt(min, max);
    }
    
    cout << "Datos a ordenar: ";

    //20 primeros
    mostrar20primeros(v);

    cout << endl << endl;

    //20 últimos
    mostrar20ultimos(v, datosGenerar);



    cout << "\n\nOrdenando " << datosGenerar << " datos enteros ..." << endl;

    clock_t t1 = clock();
    ordenar(v, datosGenerar);
    clock_t t2 = clock();

    float segundos = float (t2 - t1) / CLOCKS_PER_SEC;

    cout << "\n\nDatos ordendos: ";

    //20 primeros
    mostrar20primeros(v);

    cout << endl << endl;

    //20 últimos
    mostrar20ultimos(v, datosGenerar);

    cout << "\n\nTiempo de CPU para ordenar " << datosGenerar << " enteros: "
         << segundos << " segundos" << endl;
    
    

    return 0;
}