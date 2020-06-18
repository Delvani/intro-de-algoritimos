#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	float negativo, positivos, numeros[10], soma=0;
			for (int i = 0; i < 10; i++)
			{
				cin >> numeros[i];
				if (numeros[i]<0)
				{
					negativo ++;
				}
				else
				{
					soma+=numeros[i];
					positivos++;
				}
				
			}
			cout << negativo << endl << soma << endl;
return 0;
}
