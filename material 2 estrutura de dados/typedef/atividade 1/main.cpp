#include <iostream>
#include <string>
using namespace std;

typedef struct {
    string nome;
    string endereco;
    string cpf;
    int idade;
} Pessoa;

int main() {
    Pessoa pessoas[5];

    // Leitura dos dados para 5 pessoas
    for (int i = 0; i < 5; i++) {
        cout << "\nPessoa " << i + 1 << ":" << endl;
        cout << "Nome: ";
        getline(cin, pessoas[i].nome);
        cout << "Endereço: ";
        getline(cin, pessoas[i].endereco);
        cout << "CPF: ";
        getline(cin, pessoas[i].cpf);
        cout << "Idade: ";
        cin >> pessoas[i].idade;
        cin.ignore(); // Limpa o buffer do cin
    }

    // Exibição dos dados das 5 pessoas
    cout << "\n=== Dados das Pessoas ===" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\nPessoa " << i + 1 << ":" << endl;
        cout << "Nome: " << pessoas[i].nome << endl;
        cout << "Endereço: " << pessoas[i].endereco << endl;
        cout << "CPF: " << pessoas[i].cpf << endl;
        cout << "Idade: " << pessoas[i].idade << endl;
    }

    return 0;
}
