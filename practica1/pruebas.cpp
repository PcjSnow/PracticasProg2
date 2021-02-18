#include <iostream>
#include <ctime>
using namespace std;

int main(){

    clock_t t1 = clock();
    cout << "introduce un dato entero: ";
    int temp;
    cin >> temp;

    clock_t t2 = clock();

    float segundos = float(t2-t1) / CLOCKS_PER_SEC;
    cout << segundos << endl;
    return 0;
}