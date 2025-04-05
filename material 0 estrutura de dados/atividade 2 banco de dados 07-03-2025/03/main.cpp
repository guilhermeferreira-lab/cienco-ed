#include <iostream>

using namespace std;

int main()
{
    int idade;

    cout << "qual sua idade?" << endl;
    cin >> idade;

    if (idade < 5)
    {
        cout<<"sem categoria"<< endl;
    }
    else if (idade <=7)
    {
        cout << "nadador categoria infantil A" << endl;

    }
    else if (idade <= 10)
    {
        cout << "nadador categoria infantil  B"<< endl;

    }
    else if (idade <= 13)
    {
        cout <<"nadador categoria juvenil  A"<< endl;
    }
    else if (idade <=17)
    {
        cout <<" nadador categoria juvenil B"<< endl;

    }
    else
    {
        cout<< "categoria senior"<< endl;
    }

}
