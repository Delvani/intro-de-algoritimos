#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
					
		char x,contA=0,contB=0;
		for (int i = 0; i < 10; i++)
		{
			cin >> x;
			if(x=='a')
				contA++;
			else if(x=='b')
				contB++;	
		}
		if(contA < contB)
			cout << 1 << endl;
		else 
			cout << 0 << endl;	
		
		
		
return 0;
}	
