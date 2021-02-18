#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

using namespace std;

/* Pre: r <= s
 * Post: randDouble(r, s) = I ∧ r <= I <= s
 */
int randInt(const int a, const int b){

    //time_t semilla = time(nullptr);
    //srand(semilla);

    return a + rand() % (b - a + 1);
}


int main(int argc, char* argv[]){

    int datosGenerar = atoi(argv[1]);
    int min = atoi(argv[2]);
    int max = atoi(argv[3]);

    srand(time(nullptr));

    int numFilas = datosGenerar / 10;

    for (int i = 0; i < numFilas; i++)
    {
        cout << endl;

        for (int j = 0; j < 10; j++)
        {   
            cout << setw(6) << randInt(min, max);
        }
        
    }
    
    
    return 0;
}