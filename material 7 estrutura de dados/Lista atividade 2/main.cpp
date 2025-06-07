#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
    list<string> funcionarios;
    int quantidade;
    string nome;


    cout << "Quantos funcionarios serao cadastrados? ";
    cin >> quantidade;


    if (quantidade == 0) {
        cout << "Lista de funcionarios vazia!" << endl;
        return 0;
    }


    cin.ignore();


    for (int i = 0; i < quantidade; i++) {
        cout << "Digite o nome do funcionario " << i + 1 << ": ";
        getline(cin, nome);
        funcionarios.push_back(nome);
    }


    cout << "\nOrdem de cadastro:\n";
    for (string f : funcionarios) {
        cout << f << endl;
    }


    funcionarios.sort();
    cout << "\nOrdem alfabetica:\n";
    for (string f : funcionarios) {
        cout << f << endl;
    }


    cout << "\nOrdem reversa:\n";
    for (auto it = funcionarios.rbegin(); it != funcionarios.rend(); ++it) {
        cout << *it << endl;
    }


    cout << "\nTotal de funcionarios: " << funcionarios.size() << endl;

    return 0;
}
