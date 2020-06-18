#include <iostream>

using namespace std;
int main(){
		string mes [12] ={"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro "};
		float temp [12];
		for (int i = 0; i < 12; i++)
		{
			cin >> temp[i];
		}
		int maior =0;
		int menor = 0;
		for (int i = 0; i < 12; i++)
		{
			if (temp[i] > temp[maior])
			{
				maior = i;
			}
			else if (temp[i] < temp[menor])
			{
				menor = i;
			}
		}
		cout <<mes[maior] << endl << mes[menor]<< endl; 
return 0;
}
