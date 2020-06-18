#include <iostream>

using namespace std;

int main ( )
{
	int cod;
	cin >> cod;
	float salario, novosa, aumento;
	cin >> salario;
		if (cod == 1)
		{
			aumento = salario * 0.50;
			novosa = salario + aumento;
			cout << "Escriturario" << endl << aumento << endl << novosa <<endl;
		}
		else if (cod == 2)
		{
			aumento = salario * 0.35;
			novosa = salario+aumento;
			cout << "Secretario" << endl << aumento << endl << novosa <<endl;
		}
		if (cod == 3)
		{
		aumento = salario * 0.20;
			novosa = salario+aumento;
			cout << "Caixa" << endl << aumento << endl << novosa <<endl;
		}
		if (cod == 4)
		{
		aumento = salario * 0.10;
			novosa = salario+aumento;
			cout << "Gerente" << endl << aumento << endl << novosa <<endl;
		}
		else if (cod == 5)
		{
		aumento = salario*0;
		cout << "Diretor" << endl << aumento << endl << salario <<endl;
		}
	return 0;
}
