#include <iostream>

using namespace std;

int main ( )
{
	int n1, n2;
	cin >> n1;
	cin >> n2;
	int maior = n1;
	int menor = n2;

	if(menor > maior){
		maior = n2;
		menor = n1;
	}	
	
	cout << maior - menor << endl;
	return 0;
}
