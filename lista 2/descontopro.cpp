#include <iostream>

using namespace std;

int main ( )
{
	float  preco, novopreco;
	cin >> preco;
	int cod;
	cin >> cod;
	if( preco<=30.00)
	{
		cout  << preco << endl;
	}
	else if  (preco>30.00 && preco<=100.00)
	{
		novopreco = preco-(preco*0.10);
		cout << preco*0.10 << endl;
		cout << novopreco << endl;
	}
	if (preco>100.00)
	{
		novopreco = preco-(preco*0.15);
		cout << preco*0.15 << endl;
		cout << novopreco << endl;	 
	}
	return 0;
}
