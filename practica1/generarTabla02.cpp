#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

using namespace std;


/* Pre: r <= s
 * Post: randDouble(r, s) = I ∧ r <= I <= s
 */
double randDouble(const double r, const double s) {

    double f = (double)rand() / RAND_MAX;
    return r + f * (s - r);
}


int main(int argc, char* argv[]){

    int datosGenerar = atoi(argv[1]);
    double min = atof(argv[2]);
    double max = atof(argv[3]);

    srand(time(nullptr));

    int numFilas = datosGenerar / 10;

    for (int i = 0; i < numFilas; i++)
    {
        cout << endl;

        for (int j = 0; j < 10; j++)
        {   
            cout << setw(9) << setprecision(4) << randDouble(min, max);
        }
        
    }
    
    
    return 0;
}