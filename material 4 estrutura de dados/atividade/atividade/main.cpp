#include <iostream>
using namespace std;


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }


        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}


int contarOcorrencias(int arr[], int n, int valor) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == valor)
            contador++;
    }
    return contador;
}

int main() {
    const int TAM = 10;
    int numeros[TAM];

    cout << "Digite 10 numeros:\n";
    for (int i = 0; i < TAM; i++) {
        cin >> numeros[i];
    }

    selectionSort(numeros, TAM);


    int menor = numeros[0];
    int maior = numeros[TAM - 1];


    int freqMenor = contarOcorrencias(numeros, TAM, menor);
    int freqMaior = contarOcorrencias(numeros, TAM, maior);


    cout << "\nVetor ordenado: ";
    for (int i = 0; i < TAM; i++) {
        cout << numeros[i] << " ";
    }

    cout << "\n\nMenor numero: " << menor << " (aparece " << freqMenor << " vezes)";
    cout << "\nMaior numero: " << maior << " (aparece " << freqMaior << " vezes)\n";

    return 0;
}
