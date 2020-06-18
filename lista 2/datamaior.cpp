#include <iostream>

using namespace std;

int main ( )
{
	int dia1, dia2, mes1, mes2, ano1, ano2;
	cin >> dia1;
	cin >> mes1;
	cin >> ano1;
	cin >> dia2;
	cin >> mes2;
	cin >> ano2;
	int maior = dia1;
	int aux = dia2;
	if(aux > maior){
		maior = dia2;
		aux = dia1;
	}
	int maior1 = mes1;
	int aux1 = mes2;
	if(aux1 > maior1){
		maior1 = mes2;
		aux1 = mes1;
	}
	int maior2 = ano1;
	int aux2 = ano2;
	if(aux2 > maior){
		maior2 = ano2;
		aux2 = ano1;
	}
	cout << maior <<" "<< maior1 << " " << maior2 << endl;
	return 0;
}
