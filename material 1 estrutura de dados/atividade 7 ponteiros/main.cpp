#include <iostream>
using namespace std;

int main() {
    const int TAM = 10;
    int vetor[TAM];
    int* ptr;

    // Leitura dos valores
    cout << "Digite 10 n�meros inteiros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    // Impress�o na ordem normal usando ponteiros
    cout << "\nValores na ordem normal:" << endl;
    ptr = vetor; // aponta para o primeiro elemento
    for (int i = 0; i < TAM; i++) {
        cout << *(ptr + i) << " ";
    }

    // Impress�o na ordem inversa usando ponteiros
    cout << "\n\nValores na ordem inversa:" << endl;
    ptr = vetor + TAM - 1; // aponta para o �ltimo elemento
    for (int i = TAM - 1; i >= 0; i--) {
        cout << *(ptr - (TAM - 1 - i)) << " ";
    }

    cout << endl;

    return 0;
}
