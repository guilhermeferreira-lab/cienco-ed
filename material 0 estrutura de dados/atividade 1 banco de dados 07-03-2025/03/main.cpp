#include <iostream>

using namespace std;

int main()
{
    float peso;
    float altura;
    float imc;

    cout << "qual o seu peso?" << endl;
    cin >> peso;

    cout << "qual o sua altura?"<<endl;
    cin>> altura;

    imc = peso / (altura * altura);

    if(imc < 20)
    {
        cout <<"abaixo do peso"<<endl;
    }
    else if (imc >= 20 && imc < 25)
    {
        cout<<"peso ideal"<< endl;
    }
    else
    {
        cout<<"acima do peso"<<endl;
    }
}
