#include <iostream>

using namespace std;

int main()
{
    float valor, finalvalor, reajuste;
    int me, pagamento;

    cout << "qual o preço do produto?" << endl;
    cin >> valor;

    cout<<"qual será a forma de pagamento?" << endl;
    cout<<"À vista em dinheiro ou Pix, com 10% de desconto  (1)" << endl;
    cout<<"À vista em dinheiro ou Pix, com 5% de desconto   (2)" << endl;
    cout<<"Em duas vezes ,preço normal da etiqueta sem jutos(3)" << endl;
    cout<<"Em três vezes, preço de etiqueta com acréscimo de 10%(4)" << endl;
    cin >> me;

    switch (me)
    {
    case 1:
        cout <<"escolha uma forma de pagamento :"<< endl;
        cout <<"dinheiro (D)" << endl;
        cout <<"Pix      (P)" << endl;
        cin >> pagamento;
        break;

        switch(pagamento)
        {
        case 'D':
            reajuste = valor * 10/100;
            finalvalor = valor - reajuste;

        cout <<"esse é o desconto :" << finalvalor << endl;
        break;

        case 'P':
            reajuste = valor * 10/100;
            finalvalor = valor - reajuste;

        cout <<"esse é o desconto :" << finalvalor << endl;
        }
        case 2:
        cout <<"escolha uma forma de pagamento :"<< endl;
        cout <<"dinheiro (REAL)" << endl;
        cout <<"Pix      (PIX)" << endl;
        cin >> pagamento;

        switch(pagamento)
        {
        case 'REAL':
            reajuste = valor * 10/100;
            finalvalor = valor - reajuste;

        cout <<"esse é o desconto :" << finalvalor << endl;
        break;

        case 'PIX':
            reajuste = valor * 10/100;
            finalvalor = valor - reajuste;

        cout <<"esse é o desconto :" << finalvalor << endl;
    }
        case 3:
            finalvalor = valor / 2;

            cout << "valor das duas parcelas :"<< finalvalor << endl;
    }
}

