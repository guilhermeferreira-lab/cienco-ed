#include <iostream>
using namespace std;

int main() {
    const int TAM = 5;
    int numeros[TAM];
    int* ptr = numeros;
    int soma = 0;

    // Leitura dos valores
    cout << "Digite 5 n�meros inteiros:" << endl;
    for (int i = 0; i < TAM; i++) {
        cout << "N�mero " << i + 1 << ": ";
        cin >> *(ptr + i); // leitura usando ponteiro
    }

    // C�lculo da soma usando ponteiros
    for (int i = 0; i < TAM; i++) {
        soma += *(ptr + i);
    }

    // C�lculo da m�dia
    float media = static_cast<float>(soma) / TAM;

    // Resultado
    cout << "\nA m�dia dos valores �: " << media << endl;

    return 0;
}
