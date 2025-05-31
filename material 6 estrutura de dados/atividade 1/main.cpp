#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<string> fila;
    int opcao;
    string nome;

    cout << "Bem-vindo ao sistema de atendimento da loja!" << endl;

    do {
        cout << "\nOp��es dispon�veis:" << endl;
        cout << "1. Inserir cliente na fila" << endl;
        cout << "2. Atender pr�ximo cliente" << endl;
        cout << "3. Exibir fila de espera" << endl;
        cout << "4. Encerrar o programa" << endl;

        cout << "\nDigite a op��o desejada: ";
        cin >> opcao;
        cin.ignore(); // Limpa o buffer do cin

        switch (opcao) {
            case 1:
                cout << "Digite o nome do cliente: ";
                getline(cin, nome);
                fila.push(nome);
                cout << "Cliente " << nome << " foi adicionado � fila de espera" << endl;
                break;

            case 2:
                if (!fila.empty()) {
                    cout << "Atendendo cliente: " << fila.front() << endl;
                    fila.pop();
                } else {
                    cout << "N�o h� clientes na fila." << endl;
                }
                break;

            case 3:
                if (fila.empty()) {
                    cout << "Fila de espera est� vazia." << endl;
                } else {
                    cout << "Fila de espera: ";
                    queue<string> temp = fila;
                    while (!temp.empty()) {
                        cout << temp.front();
                        temp.pop();
                        if (!temp.empty()) cout << ", ";
                    }
                    cout << endl;
                }
                break;

            case 4:
                cout << "Encerrando o programa..." << endl;
                break;

            default:
                cout << "Op��o inv�lida. Tente novamente." << endl;
        }

    } while (opcao != 4);

    return 0;
}
