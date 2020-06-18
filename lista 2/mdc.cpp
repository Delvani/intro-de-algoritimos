#include <iostream>
using namespace std;
int main(){
int a, b;
cin >> a;
cin >> b;
int maior, menor;
if (a >= b)
{
	maior = a;
	menor = b;
}
else
{
	maior = b;
	menor = a;
}
	while (menor !=0)
	{
		a = menor;
		b = maior % menor;
		maior =a;
		menor = b;
	}
	int mdc= maior;
	cout << mdc <<endl;
    return 0;
}
