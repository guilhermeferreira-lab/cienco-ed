#include <iostream>

using namespace std;

int main()
{
    float valor, finalvalor, reajuste;
    int me, pagamento;

    cout << "qual o pre�o do produto?" << endl;
    cin >> valor;

    cout<<"qual ser� a forma de pagamento?" << endl;
    cout<<"� vista em dinheiro ou Pix, com 10% de desconto  (1)" << endl;
    cout<<"� vista em dinheiro ou Pix, com 5% de desconto   (2)" << endl;
    cout<<"Em duas vezes ,pre�o normal da etiqueta sem jutos(3)" << endl;
    cout<<"Em tr�s vezes, pre�o de etiqueta com acr�scimo de 10%(4)" << end;
    cin << me;

    switch (me)
    {
    case 1:
        cout <<"escolha uma forma de pagamento :"<< endl;
        cout <<"dinheiro (1)" << endl;
        cout <<"Pix      (2)" << endl;
        cin >> pagamento;

        switch(pagamento)
        {
        case 1:
            reajuste = valor * 10/100;
            finalvalor = valor - reajuste;

        cout <<"esse � o desconto :" << finalvalor << endl;
        break;

        case 2:
            reajuste = valor * 10/100;
            finalvalor = valor - reajuste;

        cout <<"esse � o desconto :" << finalvalor << endl;
        break;
        }
        case 2:
             cout <<"escolha uma forma de pagamento :"<< endl;
        cout <<"dinheiro (1)" << endl;
        cout <<"Pix      (2)" << endl;
        cin >> pagamento;

        switch(pagamento)
        {
        case 1:
            reajuste = valor * 10/100;
            finalvalor = valor - reajuste;

        cout <<"esse � o desconto :" << finalvalor << endl;
        break;

        case 2:
            reajuste = valor * 10/100;
            finalvalor = valor - reajuste;

        cout <<"esse � o desconto :" << finalvalor << endl;
        break;
    }
        case 3:
            finalvalor = valor / 2;

            cout << "valor das duas parcelas :"<< finalvalor << endl;
            break;
}
