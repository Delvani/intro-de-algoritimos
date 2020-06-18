#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
		int v[8], va[8],vb[8], pos=0, neg=0;
		for (int i = 0; i < 8; i++)
		{
			cin >>v[i];
			if (v[i]>=0)
			{
				va[pos]=v[i];
				pos ++;
			}
			else if (v[i]<0)
			{
				vb[neg]= v[i];
				neg ++;
			}
		}
		for (int i = 0; i < pos; i++)
		{
			cout << va[i]<<" ";
		}
		cout << endl;
		for (int j = 0; j < neg; j++)
		{
			cout << vb[j] << " ";
		}
		
return 0;
}
