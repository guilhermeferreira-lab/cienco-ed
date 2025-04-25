#include <iostream>
using namespace std;

int main() {
    int idade, opiniao;
    int totalPessoas = 0, somaIdades = 0;
    int otimo = 0, bom = 0, regular = 0, ruim = 0;

    cout << "=== Pesquisa de Opiniao sobre o Filme ===" << endl;
    cout << "Digite uma idade negativa para encerrar." << endl;

    while (true) {
        cout << "\nDigite a idade: ";
        cin >> idade;

        if (idade < 0) {
            cout << "\nPesquisa encerrada!" << endl;
            break;
        }

        cout << "Opinião (1=Otimo, 2=Bom, 3=Regular, 4=Ruim): ";
        cin >> opiniao;

        if (opiniao < 1 || opiniao > 4) {
            cout << "Opinião inválida! Tente novamente." << endl;
            continue;
        }

        totalPessoas++;
        somaIdades += idade;

        switch (opiniao) {
            case 1: otimo++; break;
            case 2: bom++; break;
            case 3: regular++; break;
            case 4: ruim++; break;
        }
    }

    if (totalPessoas == 0) {
        cout << "Nenhuma pessoa respondeu à pesquisa." << endl;
    } else {
        float mediaIdade = somaIdades / (float)totalPessoas;

        cout << "\n=== Resultados da Pesquisa ===" << endl;
        cout << "A. Total de pessoas: " << totalPessoas << endl;
        cout << "B. Média de idade: " << mediaIdade << " anos" << endl;

        cout << "C. Porcentagens das respostas:" << endl;
        cout << "   Ótimo: " << (otimo * 100.0 / totalPessoas) << "%" << endl;
        cout << "   Bom: " << (bom * 100.0 / totalPessoas) << "%" << endl;
        cout << "   Regular: " << (regular * 100.0 / totalPessoas) << "%" << endl;
        cout << "   Ruim: " << (ruim * 100.0 / totalPessoas) << "%" << endl;
    }

    return 0;
}
