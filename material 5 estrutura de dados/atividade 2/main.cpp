
#include <iostream>
#include <stack>
   using namespace std;

int main() {

    setlocale(LC_ALL, "portuguese");

    stack<int> pilha;
    int numero;


    do {
       cout << "Digite um n�mero inteiro positivo ou (digite 0 para finalizar):\n";
        cin >> numero;

        if (numero != 0) {
            pilha.push(numero);
        }
    } while (numero != 0);

    cout << "N�meros na ordem inversa:\n";
    while (!pilha.empty()) {
        cout << pilha.top() << " ";
        pilha.pop();
    }

    cout << "\n";

    return 0;
}
