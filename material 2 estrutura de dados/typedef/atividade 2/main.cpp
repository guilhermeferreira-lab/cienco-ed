#include <iostream>
#include <string>
using namespace std;

typedef struct {
    string nome;
    string especie;
    int idade;
    float peso;
} Animal;

typedef Animal ListaAnimais[10];

int main() {
    ListaAnimais animais;

    // Leitura dos dados de 10 animais
    for (int i = 0; i < 10; i++) {
        cout << "\nAnimal " << i + 1 << ":" << endl;
        cout << "Nome: ";
        getline(cin, animais[i].nome);
        cout << "Espécie: ";
        getline(cin, animais[i].especie);
        cout << "Idade: ";
        cin >> animais[i].idade;
        cout << "Peso (kg): ";
        cin >> animais[i].peso;
        cin.ignore(); // Limpa o buffer do cin
    }

    // Exibição dos dados de todos os animais
    cout << "\n=== Dados dos Animais ===" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "\nAnimal " << i + 1 << ":" << endl;
        cout << "Nome: " << animais[i].nome << endl;
        cout << "Espécie: " << animais[i].especie << endl;
        cout << "Idade: " << animais[i].idade << " anos" << endl;
        cout << "Peso: " << animais[i].peso << " kg" << endl;
    }

    return 0;
}
