#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
		int v[7];
		for (int i = 0; i < 7; i++)
		{
			cin >> v[i];
		}
		int n, mult=1;
		cin >> n;
		while (n >=0)
		{
			mult =mult*v[n];
			cin >> n;
		}
		cout << mult << endl;
return 0;
}
