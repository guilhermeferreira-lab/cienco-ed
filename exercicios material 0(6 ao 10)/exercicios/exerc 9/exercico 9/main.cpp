#include <iostream>
using namespace std;

int main() {
    int numeroAluno, alunoMaisAlto, alunoMaisBaixo;
    float altura, maiorAltura = 0, menorAltura = 1000;

    for (int i = 1; i <= 10; i++) {
        cout << "Digite o número do aluno " << i << ": ";
        cin >> numeroAluno;

        cout << "Digite a altura (em cm) do aluno " << numeroAluno << ": ";
        cin >> altura;

        if (altura > maiorAltura) {
            maiorAltura = altura;
            alunoMaisAlto = numeroAluno;
        }

        if (altura < menorAltura) {
            menorAltura = altura;
            alunoMaisBaixo = numeroAluno;
        }
    }

    cout << "\nAluno mais alto: número " << alunoMaisAlto << " com " << maiorAltura << " cm." << endl;
    cout << "Aluno mais baixo: número " << alunoMaisBaixo << " com " << menorAltura << " cm." << endl;

    return 0;
}
