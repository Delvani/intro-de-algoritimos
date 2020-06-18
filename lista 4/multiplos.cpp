#include <iostream>

using namespace std;
int main(){
		int numeros[7], mult2=0, mult3=0, mult2_3=0;
		for (int i = 0; i < 7; i++)
		{
			cin >> numeros[i];
		}
			for (int i = 0; i < numeros[i]; i++)
			{
				if (numeros[i]%2==0)
				{
						cout << numeros[i]<< " ";
						mult2 ++;
				}
			}
			if (! mult2)
			{
				cout << '0' ;
			}
			cout << endl;
			for (int i = 0; i < numeros[i]; i++)
			{
			if (numeros[i]%3==0)
			{
				cout << numeros[i]<<" ";
				mult3 ++;
			}
		}
			if (!mult2)
			{
					cout << '0' ;
			}
			cout << endl;
			for (int i = 0; i <numeros[i] ; i++)
			{
			 if (numeros[i]%2==0 && numeros[i]%3==0)
			{
				cout << numeros[i]<<" ";
				mult2_3 ++;
			}
		}
			if (!mult2_3)
			{
					cout << '0' ;
			}
			cout << endl;
return 0;
}
