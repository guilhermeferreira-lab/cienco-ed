#include <iostream>
#include <string>
using namespace std;

struct Estudante {
    string nome;
    float nota;
    string status;
};

int main() {
    const int MAX = 100;
    Estudante estudantes[MAX];
    int qtd = 0;
    char continuar;

    do {
        cout << "\n=== Registro de Estudante ===" << endl;
        cout << "Nome: ";
        getline(cin, estudantes[qtd].nome);
        cout << "Nota Final: ";
        cin >> estudantes[qtd].nota;
        cin.ignore();

        estudantes[qtd].status = (estudantes[qtd].nota >= 6.0) ? "Aprovado" : "Reprovado";

        qtd++;

        cout << "\nDeseja registrar outro estudante? (S/N): ";
        cin >> continuar;
        cin.ignore();
    } while ((continuar == 'S' || continuar == 's') && qtd < MAX);

    cout << "\n=== Lista de Estudantes ===" << endl;
    for (int i = 0; i < qtd; i++) {
        cout << estudantes[i].nome << " - Nota: " << estudantes[i].nota
             << " - " << estudantes[i].status << endl;
    }

    return 0;
}
