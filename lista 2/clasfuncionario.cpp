#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
					
		int tempo;
		float salario,imposto,salarioliq,grat;
		cin >> salario >> tempo;
		
		if(salario < 200)
			imposto =  salario*0;
		else if(salario >= 200 and salario <= 450)
			imposto =  salario*0.03;
		else if(salario > 450 and salario < 700)
			imposto =  salario*0.08;
		else if(salario > 700)
			imposto =  salario*0.12;
							
		if(salario > 500 and tempo <= 3)
			grat = salario*0.20;
		else if(salario > 500 and tempo > 3)							
			grat =  salario*0.30;
		else if(salario <= 500 and tempo <=3)
			grat =  salario*0.23;
		else if(salario <= 500 and tempo > 3 and tempo < 6)
			grat = salario*0.35;
		else if(salario <= 500 and tempo > 6)
			grat =  salario*0.33;
		
		salarioliq = (salario-imposto)+grat;	
		cout << imposto << endl;
		cout << grat << endl;
		cout << salarioliq << endl;

		if(salarioliq <= 350)
			cout << "A" << endl;
		else if(salarioliq >= 350 and salarioliq < 600)
			cout << "B" << endl;
		else if(salarioliq > 600)
			cout << "C" << endl;
return 0;
}	
