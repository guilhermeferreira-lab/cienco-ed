#include <iostream>
#include <string>
using namespace std;

struct Filme {
    string nome;
    float enredo, atuacao, efeitos;
};

int main() {
    Filme filme;
    char continuar;

    do {
        cout << "\n=== Avalia��o de Filme ===" << endl;
        cout << "Nome do Filme: ";
        getline(cin, filme.nome);

        cout << "Nota para o Enredo (0 a 10): ";
        cin >> filme.enredo;
        cout << "Nota para a Atua��o (0 a 10): ";
        cin >> filme.atuacao;
        cout << "Nota para os Efeitos Especiais (0 a 10): ";
        cin >> filme.efeitos;
        cin.ignore();

        float media = (filme.enredo + filme.atuacao + filme.efeitos) / 3.0;
        cout << "M�dia das Avalia��es: " << media << endl;

        cout << "\nDeseja avaliar outro filme? (S/N): ";
        cin >> continuar;
        cin.ignore();
    } while (continuar == 'S' || continuar == 's');

    return 0;
}
