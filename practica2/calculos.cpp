#include <iostream>
#include "calculos.hpp"


int numCifras(const int n, const int b) {

    if (n == 0) //CB1
    {
        return 1;
    }
    else if (n / b == 0) { //CB2 0 < n < b
        return 1;
    }
    else { //CR1 n >= b
        return 1 + numCifras(n/b, b);
    }
    
   
}


int cifra(const int n, const int i, const int b) {

    if (i == 1) //CB1
    {
        return n % b;
    }
    else { //CR1
        
        return cifra(n/b, i-1, b);
    }
    
    
}

int cifraMayor(const int n, const int b) {
    
    if (n < b) //CB1
    {
        return n;
    }
    else if ( n % b >= cifraMayor(n/b, b) ){ //CB2
        return n % b;
    }
    else { //CR1
        cifraMayor(n/b, b);
    }
    
}

int cifraMasSignificativa(const int n, const int b) {

    if (n < b) { //CB1
        return n;
    }
    else { //CR1
        return cifraMasSignificativa(n/b, b);
    }
}

int sumaCifras(const int n, const int b) {

    if (n < b) //CB1
    {
        return n;
    }
    else { //CR1
        return (n % b) + sumaCifras(n/b, b);
    }
    
}