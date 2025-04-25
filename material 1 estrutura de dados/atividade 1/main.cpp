#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomes[10];
    string nome_busca;


    cout << "Digite 10 nomes:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Nome " << i+1 << ": ";
        getline(cin, nomes[i]);
    }


    cout << "Digite o nome para buscar: ";
    getline(cin, nome_busca);


    bool encontrado = false;
    for (int i = 0; i < 10; i++) {
        if (nomes[i] == nome_busca) {
            encontrado = true;
            break;
        }
    }


    if (encontrado) {
        cout << "ACHEI" << endl;
    } else {
        cout << "NÃO ACHEI" << endl;
    }

    return 0;
}
