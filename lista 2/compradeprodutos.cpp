#include <iostream>

using namespace std;

int main ( )
{
	int cod;
	cin >> cod;
	int quantidade;
	cin >> quantidade;
	float desconto, valorf,compra, valor;
	if (cod >=1 && cod <=10)
	{
		valor = 10.00;
		compra = quantidade*valor;
		if (compra <= 250.00)
		{
			desconto = compra*0.05;
			valorf = compra-(compra*0.05);
		}
		else if (compra > 250.00 && compra >=500.00)
		{
			desconto = compra*0.10;
			valorf = compra-(compra*0.10);
		}
		if (compra > 500.00)
		{
			desconto = compra*0.15;
			valorf = compra -(compra*0.15);
		}
	}
	if (cod >10 && cod <=20)
	{
		valor = 15.00;
		compra = quantidade*valor;
		if (compra <= 250.00)
		{
			desconto = compra*0.05;
			valorf = compra-(compra*0.05);
		}
		else if (compra > 250.00 && compra >=500.00)
		{
			desconto = compra*0.10;
			valorf = compra-(compra*0.10);
		}
		 if (compra > 500.00)
		{
			desconto = compra*0.15;
			valorf = compra -(compra*0.15);
		}
	}
	else if (cod >20 && cod <=30)
	{
		valor = 20.00;
		compra = quantidade*valor;
		if (compra <= 250.00)
		{
			desconto = compra*0.05;
			valorf = compra-(compra*0.05);
		}
		else if (compra > 250.00 && compra >=500.00)
		{
			desconto = compra*0.10;
			valorf = compra-(compra*0.10);
		}
		if (compra > 500.00)
		{
			desconto = compra*0.15;
			valorf = compra -(compra*0.15);
		}
	}
	else if (cod >30 && cod <=40)
	{
		valor = 30.00;
		compra = quantidade*valor;
		if (compra <= 250.00)
		{
			desconto = compra*0.05;
			valorf = compra-(compra*0.05);
		}
		else if (compra > 250.00 && compra >=500.00)
		{
			desconto = compra*0.10;
			valorf = compra-(compra*0.10);
		}
		if (compra > 500.00)
		{
			desconto = compra*0.15;
			valorf = compra -(compra*0.15);
		}
	}
	cout << valor << endl << compra << endl <<desconto << endl << valorf << endl; 
	
	return 0;
}
