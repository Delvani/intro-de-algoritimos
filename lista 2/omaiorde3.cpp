#include <iostream>

using namespace std;

int main ( )
{
	float n1, n2, n3;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	float maior = n1;
	float aux = n2;
	if(aux > maior){
		maior = n2;
		aux = n1;
	}
	if(n3 > maior){
		aux = maior;
		maior = n3;
	}
	cout << maior << endl;
	return 0;
}
