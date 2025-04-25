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
        cout << "Título: ";
        getline(cin, livro.titulo);

        if (livro.titulo == "FIM") break;

        cout << "Autor: ";
        getline(cin, livro.autor);
        cout << "Ano de Publicação: ";
        cin >> livro.ano;
        cin.ignore();

        cout << "\nLivro cadastrado com sucesso!" << endl;
    }

    return 0;
}
