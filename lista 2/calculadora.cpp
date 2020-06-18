#include <iostream>

using namespace std;

int main ( )
{
	float primeiro, segundo, resultado;
	cin >> primeiro;
	char operador;
	cin >> operador;
	cin >> segundo;
	if (operador == '+' )
	{
		resultado = primeiro + segundo;
  cout << resultado << endl;
	}
	else if (operador == '-')
	{
		resultado = primeiro - segundo;
  cout << resultado << endl;
	}
	else if (operador == '*')
	{
		resultado = primeiro * segundo;
  cout << resultado << endl;
	}
	else if (operador == '/')
	{
  if (segundo ==0)
  {
   cout << "erro" << endl;
  }
  else
  {
   	resultado = primeiro / segundo;
    cout << resultado << endl;
  }
	}
	return 0;
}
