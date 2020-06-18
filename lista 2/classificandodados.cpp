#include <iostream>

using namespace std;

int main ( )
{
	int idade;
	cin >> idade;
		if (idade < 5)
		{
			cout << "nao registardo" << endl;
		}
		else if (idade >=5 && idade <=7)
		{
			cout << "Infantil" << endl;
		}
		if (idade >= 8 && idade <= 10)
		{
		cout << "Juvenil" << endl;
		}
		if (idade >= 11 && idade <=15)
		{
			cout << "Adolescente" << endl;
		}
		else if (idade >= 16 && idade <= 30)
		{
			cout << "Adulto" << endl;
		}
		 if (idade > 30)
		{
			cout << "Senior" << endl;
		}
	return 0;
}
