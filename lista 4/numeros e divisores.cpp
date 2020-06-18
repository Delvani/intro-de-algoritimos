#include <iostream>

using namespace std;
int main(){
int va[10], vb[5],dv=0;
for (int i = 0; i < 10; i++)
{
	cin >> va[i];
}
for (int j = 0; j < 5 ; j++)
{
	cin >> vb[j];
}
for (int i = 0; i < 10; i++)
{
	dv =0;
	for (int j = 0; j < 5 ; j++)
	{
		if (va[i]%vb[j]==0)
		{
			dv++;
		}
	}
		cout << va[i]<< " " << dv <<endl;
}
return 0;
}
