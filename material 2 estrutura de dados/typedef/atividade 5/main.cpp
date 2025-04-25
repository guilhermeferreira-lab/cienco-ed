#include <iostream>
using namespace std;

typedef enum { VERMELHO, VERDE, AZUL } Cores;

typedef Cores TipoCor;

int main() {
    TipoCor corEscolhida;

    // Leitura da cor escolhida
    cout << "Escolha uma cor: \n0 - Vermelho\n1 - Verde\n2 - Azul\n";
    cout << "Digite o número correspondente: ";
    int escolha;
    cin >> escolha;

    corEscolhida = static_cast<TipoCor>(escolha);

    // Exibição da cor escolhida
    switch (corEscolhida) {
        case VERMELHO:
            cout << "Você escolheu a cor Vermelho." << endl;
            break;
        case VERDE:
            cout << "Você escolheu a cor Verde." << endl;
            break;
        case AZUL:
            cout << "Você escolheu a cor Azul." << endl;
            break;
        default:
            cout << "Cor inválida." << endl;
    }

    return 0;
}
