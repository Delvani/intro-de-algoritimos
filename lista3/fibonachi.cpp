#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
					
		int qtd,f1=0,f2=1,nuvem;
		cin >> qtd;
		
		if(qtd==1){
			cout << f1 << endl;
		}
		else if(qtd==2){
			cout << f1 << endl << f2 << endl;
		}
		else{
			cout << f1 << endl;
		for (int i = 1; i < qtd; i++)
		{
			f2 = f2+f1;
			cout << f2 << endl;
			nuvem = f2;
			f2 = f1;
			f1 = nuvem;
		}
	}			 	
		
		
return 0;
}
