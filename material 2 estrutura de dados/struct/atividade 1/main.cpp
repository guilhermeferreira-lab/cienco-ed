#include <iostream>
#include <string>
using namespace std;

struct Paciente {
    string nome;
    int idade;
    string sintoma;
};

int main() {
    Paciente paciente;
    char continuar;

    do {
        cout << "\n=== Cadastro de Paciente ===" << endl;
        cout << "Nome: ";
        getline(cin, paciente.nome);
        cout << "Idade: ";
        cin >> paciente.idade;
        cin.ignore();
        cout << "Sintoma: ";
        getline(cin, paciente.sintoma);

        cout << "\nPaciente cadastrado com sucesso!" << endl;

        cout << "\nDeseja cadastrar outro paciente? (S/N): ";
        cin >> continuar;
        cin.ignore();

    } while (continuar == 'S' || continuar == 's');

    return 0;
}
