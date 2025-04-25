#include <iostream>
using namespace std;

typedef int VetorInteiros[5];

int main() {
    VetorInteiros vetor = {1, 2, 3, 4, 5};

    // Exibição dos valores do vetor
    cout << "Valores do vetor:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
