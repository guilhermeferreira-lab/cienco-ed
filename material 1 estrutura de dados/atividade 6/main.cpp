#include <iostream>
using namespace std;

int main() {
    const int DIAS_DO_ANO = 365;
    float temperaturas[DIAS_DO_ANO];
    float soma = 0.0, media_anual;
    float menor_temp, maior_temp;
    int dias_abaixo_da_media = 0;

    // Leitura das temperaturas dos 365 dias
    cout << "Digite a temperatura m�dia de cada dia do ano:" << endl;
    for (int i = 0; i < DIAS_DO_ANO; i++) {
        cout << "Dia " << i + 1 << ": ";
        cin >> temperaturas[i];
        soma += temperaturas[i];

        // Atualiza menor e maior temperatura
        if (i == 0) {
            menor_temp = maior_temp = temperaturas[i];
        } else {
            if (temperaturas[i] < menor_temp)
                menor_temp = temperaturas[i];
            if (temperaturas[i] > maior_temp)
                maior_temp = temperaturas[i];
        }
    }

    // C�lculo da m�dia anual
    media_anual = soma / DIAS_DO_ANO;

    // Contagem de dias com temperatura abaixo da m�dia
    for (int i = 0; i < DIAS_DO_ANO; i++) {
        if (temperaturas[i] < media_anual) {
            dias_abaixo_da_media++;
        }
    }

    // Resultados
    cout << "\n=== Resultados ===" << endl;
    cout << "Menor temperatura do ano: " << menor_temp << "�C" << endl;
    cout << "Maior temperatura do ano: " << maior_temp << "�C" << endl;
    cout << "Temperatura m�dia anual: " << media_anual << "�C" << endl;
    cout << "N�mero de dias com temperatura abaixo da m�dia: " << dias_abaixo_da_media << endl;

    return 0;
}
