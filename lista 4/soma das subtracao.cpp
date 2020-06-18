#include <iostream>

using namespace std;
int main(){
		int va[5], vb[5], soma=0;
		for (int i = 0; i < 5; i++)
		{
			cin >> va[i];
		}
		for (int j = 0; j <5 ; j++)
		{
			cin >> vb [j];
		}
		int i=0;
		for (int  j= 4; j>=0 ; j--)
		{
			soma+=va[i]-vb[j];
			i++;
		}
		cout << soma << endl;
return 0;
}
