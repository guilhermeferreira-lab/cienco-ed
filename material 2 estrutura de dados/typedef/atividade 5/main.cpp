#include <iostream>
using namespace std;

typedef enum { VERMELHO, VERDE, AZUL } Cores;

typedef Cores TipoCor;

int main() {
    TipoCor corEscolhida;

    // Leitura da cor escolhida
    cout << "Escolha uma cor: \n0 - Vermelho\n1 - Verde\n2 - Azul\n";
    cout << "Digite o n�mero correspondente: ";
    int escolha;
    cin >> escolha;

    corEscolhida = static_cast<TipoCor>(escolha);

    // Exibi��o da cor escolhida
    switch (corEscolhida) {
        case VERMELHO:
            cout << "Voc� escolheu a cor Vermelho." << endl;
            break;
        case VERDE:
            cout << "Voc� escolheu a cor Verde." << endl;
            break;
        case AZUL:
            cout << "Voc� escolheu a cor Azul." << endl;
            break;
        default:
            cout << "Cor inv�lida." << endl;
    }

    return 0;
}
