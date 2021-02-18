#include <iostream>
#include <ctime>

using namespace std;


int main(int argc, char* argv[]){

    //Para convertir de char* a int usamos la función atoi()
    int nVeces = atoi(argv[argc-1]);
    
    if (nVeces == 0)
    {
        size_t t1 = time(nullptr);

        cout << "1) Pulse la tecla de fin de línea, por favor ...";

        char temp;
        cin.get(temp);

        size_t t2 = time(nullptr);

        int tiempo = int(t2 - t1);

        cout << "Su tiempo de reacción ha sido de " << tiempo << " segundos." << endl;
    }
    else {

        for (int i = 0; i < nVeces; i++)
        {
            size_t t1 = time(nullptr);

            cout << endl << i+1 << ") " << "Pulse la tecla de fin de línea, por favor ...";

            char temp;
            cin.get(temp);

            size_t t2 = time(nullptr);

            int tiempo = int(t2 - t1);

            cout << "Su tiempo de reacción ha sido de " << tiempo << " segundos." << endl;
        }
        
    }
    
    
    return 0;
}