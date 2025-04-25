#include <iostream>
using namespace std;

int main() {
    const int TAM = 10;
    int A[TAM], M[TAM];
    int X;

    // Leitura do vetor A
    cout << "Digite 10 números para o vetor A:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    // Leitura do valor de X
    cout << "Digite o valor de X: ";
    cin >> X;

    // Multiplicação dos elementos de A por X e armazenamento em M
    for (int i = 0; i < TAM; i++) {
        M[i] = A[i] * X;
    }

    // Impressão do vetor M
    cout << "\nVetor M (A[i] * X):" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "M[" << i << "] = " << M[i] << endl;
    }

    return 0;
}
