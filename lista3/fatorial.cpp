#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
					
		int n,soma=1;
		cin >> n;
		while(n >= 1){
			soma*=n;
			n--;
		}
		cout << soma << endl;	
		
		
		
return 0;
}
