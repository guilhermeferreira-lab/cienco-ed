#include <iostream>

using namespace std;

int main()
{
    float sal, salreajuste, salnv;
    float reajuste;

    cout << "qual o seu salario?" << endl;
    cin >> sal;

    if (sal < 1000)
    {
        salreajuste = sal * 15/100;
        salnv = salreajuste + sal;
    cout << "seu reajuste de 15% � :"<< salnv << endl;
    }
    else if (sal  <= 1500)
    {

        salreajuste = sal * 10/100;
        salnv = salreajuste + sal;
        cout << "seu reajuste de 10% � :"<< salnv << endl;

    }
    else
    {

        salreajuste = sal * 5/100;
        salnv = salreajuste + sal;
        cout << "seu reajuste de 5% � :"<< salnv << endl;
    }
}
