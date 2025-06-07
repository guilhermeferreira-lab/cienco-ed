#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numeros;
    int valor;


    cout << "Digite 5 numeros inteiros:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> valor;
        numeros.push_back(valor);
    }


    cout << "Numeros na ordem de insercao: ";
    for (int n : numeros) {
        cout << n << " ";
    }
    cout << endl;


    cout << "Numeros na ordem inversa: ";
    for (auto it = numeros.rbegin(); it != numeros.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
