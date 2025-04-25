#include <iostream>
using namespace std;

int main() {
    const int TAM = 5;
    int numeros[TAM];
    int* ptr = numeros;
    int soma = 0;

    // Leitura dos valores
    cout << "Digite 5 números inteiros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> *(ptr + i); // leitura usando ponteiro
    }

    // Cálculo da soma usando ponteiros
    for (int i = 0; i < TAM; i++) {
        soma += *(ptr + i);
    }

    // Cálculo da média
    float media = static_cast<float>(soma) / TAM;

    // Resultado
    cout << "\nA média dos valores é: " << media << endl;

    return 0;
}
