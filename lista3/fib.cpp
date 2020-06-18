#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
					
		int n,f1=0,f2=1,i=3,f;
		cin >> n;
		while (i<=n)
		{
			f= f1+f2;
			f2=f1;
			f1=f;
			i++;
		}
		

return 0;
}
