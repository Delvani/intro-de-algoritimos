#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
		
		int n, i=0, j=0;
		cin >> n;
		while( i <= n )
		{
			while (j <=n)
			{
					if(i%2==0)
						if(j%2==0)
						cout << ".";
					else
						cout << "#";
				else
					if(j%2==0)
						cout << "#";
					else
						cout << ".";
						j++;
			}
			i ++;
			cout << endl;
		}
return 0;
}
