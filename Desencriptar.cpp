#include <iostream>
using namespace std;

int main() {
    long long base, expo, modulo;
    
    cout << "Ingrese la base: ";
    cin >> base;
    
    cout << "Ingrese el valor de exponente: ";
    cin >> expo;
    
    cout << "Ingrese el valor de modulo: ";
    cin >> modulo;
    
    long long i = 1;
    long long c = base;
    
    while (i < expo) {
        c = (c * base) % modulo;
        i = i + 1;
    }
    
    cout << "El resultado es: " << c << endl;
    
    return 0;
} 