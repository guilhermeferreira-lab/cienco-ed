#include <iostream>
#include <string>
using namespace std;

struct Livro {
    string titulo;
    string autor;
    int ano;
};

int main() {
    Livro livro;

    while (true) {
        cout << "\n=== Cadastro de Livro ===" << endl;
        cout << "T�tulo: ";
        getline(cin, livro.titulo);

        if (livro.titulo == "FIM") break;

        cout << "Autor: ";
        getline(cin, livro.autor);
        cout << "Ano de Publica��o: ";
        cin >> livro.ano;
        cin.ignore();

        cout << "\nLivro cadastrado com sucesso!" << endl;
    }

    return 0;
}
