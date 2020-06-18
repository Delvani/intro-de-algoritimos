#include <iostream>

using namespace std;

int main ( )
{
	float n1, n2, n3, n4;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	cin >> n4;
	float maior = n1;
	float segmaior = n2;

	if(segmaior > maior){
		maior = n2;
		segmaior = n1;
	}	
	if(n3 > maior){
		segmaior = maior;
		maior = n3;
	}
	else if(n3 > segmaior){
		segmaior = n3;
	}
	if(n4 > maior){
		segmaior = maior;
		maior = n4;
	}
	else if(n4 > segmaior){
		segmaior = n4;
	}		
		cout << maior << endl << segmaior << endl;
	return 0;
}
