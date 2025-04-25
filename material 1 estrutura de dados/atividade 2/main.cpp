#include <iostream>
using namespace std;

int main() {
    const int TOTAL_ALUNOS = 20;
    float notas[TOTAL_ALUNOS];
    float soma = 0, media;
    int acima_da_media = 0;

    // Leitura das notas dos 20 alunos
    cout << "Digite as notas dos 20 alunos:" << endl;
    for (int i = 0; i < TOTAL_ALUNOS; i++) {
        cout << "Nota do aluno " << i + 1 << ": ";
        cin >> notas[i];
        soma += notas[i];
    }

    // Cálculo da média
    media = soma / TOTAL_ALUNOS;

    // Contagem de alunos com nota acima da média
    for (int i = 0; i < TOTAL_ALUNOS; i++) {
        if (notas[i] > media) {
            acima_da_media++;
        }
    }

    // Saída dos resultados
    cout << "\nMédia da turma: " << media << endl;
    cout << "Número de alunos com nota acima da média: " << acima_da_media << endl;

    return 0;
}
