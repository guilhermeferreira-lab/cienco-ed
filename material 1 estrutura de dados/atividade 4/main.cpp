#include <iostream>
using namespace std;

int main() {
    const int TAM = 20;
    int numeros[TAM];

    // Leitura dos 20 n�meros
    cout << "Digite 20 n�meros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "N�mero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Impress�o dos n�meros na ordem inversa
    cout << "\nN�meros na ordem inversa:" << endl;
    for (int i = TAM - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
