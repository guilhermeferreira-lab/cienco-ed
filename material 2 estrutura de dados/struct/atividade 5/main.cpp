#include <iostream>
#include <string>
using namespace std;

struct Pedido {
    string prato;
    int quantidade;
    float preco_total;
};

int main() {
    Pedido pedido;

    cout << "=== Registro de Pedidos ===" << endl;
    while (true) {
        cout << "\nNome do prato: ";
        getline(cin, pedido.prato);
        cout << "Quantidade: ";
        cin >> pedido.quantidade;
        cout << "Preço total: ";
        cin >> pedido.preco_total;
        cin.ignore();

        if (pedido.preco_total == 0.0f) break;

        cout << "\nPedido registrado: " << pedido.prato
             << " - Quantidade: " << pedido.quantidade
             << " - Total: R$" << pedido.preco_total << endl;
    }

    cout << "\nEncerrando o registro de pedidos." << endl;
    return 0;
}
