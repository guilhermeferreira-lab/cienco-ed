#include <iostream>
using namespace std;

int main() {
    int voto;
    int candidato1 = 0, candidato2 = 0, nulo = 0, branco = 0, total = 0;

    cout << "Digite o c�digo do voto (1, 2 = candidatos | 3 = nulo | 4 = branco | 0 = fim):" << endl;

    while (true) {
        cin >> voto;

        if (voto == 0) {
            break; // Encerra a leitura
        }

        switch (voto) {
            case 1:
                candidato1++;
                total++;
                break;
            case 2:
                candidato2++;
                total++;
                break;
            case 3:
                nulo++;
                total++;
                break;
            case 4:
                branco++;
                total++;
                break;
            default:
                cout << "C�digo inv�lido. Tente novamente." << endl;
        }
    }

    // Evita divis�o por zero
    if (total == 0) {
        cout << "Nenhum voto foi registrado." << endl;
    } else {
        cout << "\nResultados da elei��o:" << endl;
        cout << "Candidato 1: " << (candidato1 * 100.0 / total) << "% dos votos" << endl;
        cout << "Candidato 2: " << (candidato2 * 100.0 / total) << "% dos votos" << endl;
        cout << "Votos nulos: " << (nulo * 100.0 / total) << "% dos votos" << endl;
        cout << "Votos em branco: " << (branco * 100.0 / total) << "% dos votos" << endl;
    }

    return 0;
}
