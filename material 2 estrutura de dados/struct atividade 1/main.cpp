#include <iostream>

using namespace std;

struct Paciente{
    string nome;
    int idade;
    string sintoma;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Paciente paciente;

    char resposta;
    do
    {

    cout << "digite seu nome: ";
    getline(cin, paciente.nome);
    cout << "digite sua idade: ";
    cin >> paciente.idade;
    cout <<" digite sua doença: ";
    cin >> paciente.sintoma;
    cin.ignore();

cout << "paciente : " << paciente.nome << endl;
cout << "idade do paciente :"<< paciente.idade<<endl;
cout << "sintomas: "<< paciente.sintoma<< endl;
    cout << "deseja registrar outro paciente? s/n";
    cin >> resposta;
    cin.ignore();



       } while (resposta == 's' || resposta == 'S');
       return 0;


}
