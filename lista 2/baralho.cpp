#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
					
		int qtd,pos;
		cin >> qtd >> pos;
		if(pos < qtd/2)
			cout << (pos*2)+1 << endl;
		else
			cout << 2*(pos-qtd/2) << endl;
return 0;
}	
