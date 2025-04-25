#include <iostream>
#include <string>
using namespace std;

typedef struct {
    string rua;
    string cidade;
    string cep;
} Endereco;

typedef Endereco TipoEndereco;

int main() {
    TipoEndereco endereco;

    // Leitura dos dados de endereço
    cout << "\n=== Cadastro de Endereço ===" << endl;
    cout << "Rua: ";
    getline(cin, endereco.rua);
    cout << "Cidade: ";
    getline(cin, endereco.cidade);
    cout << "CEP: ";
    getline(cin, endereco.cep);

    // Exibição dos dados de endereço
    cout << "\n=== Endereço Informado ===" << endl;
    cout << "Rua: " << endereco.rua << endl;
    cout << "Cidade: " << endereco.cidade << endl;
    cout << "CEP: " << endereco.cep << endl;

    return 0;
}
