#include <iostream>
using namespace std;

int main() {
    int N;

    // Leitura do tamanho dos vetores
    cout << "Digite o valor de N (tamanho dos vetores): ";
    cin >> N;

    // Criação dos vetores com tamanho N
    int A[N], B[N], Soma[N];

    // Leitura dos elementos do vetor A
    cout << "\nDigite os " << N << " elementos do vetor A:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    // Leitura dos elementos do vetor B
    cout << "\nDigite os " << N << " elementos do vetor B:" << endl;
    for (int i = 0; i < N; i++) {
        cout << "B[" << i << "]: ";
        cin >> B[i];
    }

    // Soma dos vetores A e B
    for (int i = 0; i < N; i++) {
        Soma[i] = A[i] + B[i];
    }

    // Impressão do vetor Soma
    cout << "\nVetor Soma (A[i] + B[i]):" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Soma[" << i << "] = " << Soma[i] << endl;
    }

    return 0;
}
