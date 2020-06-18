#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main(){
		string pa;
		cin >> pa;
		int cont=0;
		for (int i = 0; i < (int)pa.size() ; i++)
		{
			if ((pa[i]=='a')||(pa[i]=='e')||(pa[i]=='i')|| (pa[i]=='o')||(pa[i]=='u'))
			{
				cont ++;
			}
		}
		cout << cont << endl;
return 0;
}
