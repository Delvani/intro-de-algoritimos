#include <iostream>

using namespace std;

int main ( )
{
float  salario, novosalario;
cin >> salario;
if(salario<=300.00)
{
novosalario = salario+(salario*0.15);
cout << salario*0.15 << endl;
cout  << novosalario << endl;
}
else if  (salario>300.00 && salario<=600.00)
{
novosalario = salario+(salario*0.10);
cout << salario*0.10 << endl;
cout << novosalario << endl;
}
else if (salario>600.00&& salario<=900.00)
{
novosalario = salario+(salario*0.05);
cout << salario*0.05 << endl;
cout << novosalario << endl;	 
}
 
else
{
cout << salario*0 << endl;
cout << salario  << endl;
}
return 0;
}
