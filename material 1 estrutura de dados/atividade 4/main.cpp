#include <iostream>
using namespace std;

int main() {
    const int TAM = 20;
    int numeros[TAM];

    // Leitura dos 20 números
    cout << "Digite 20 números:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Impressão dos números na ordem inversa
    cout << "\nNúmeros na ordem inversa:" << endl;
    for (int i = TAM - 1; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
