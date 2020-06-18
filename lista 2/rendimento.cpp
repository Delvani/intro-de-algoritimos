#include <iostream>

using namespace std;

int main ( )
{
int  numero;
cin >> numero;
float investimento, valorf;
cin >> investimento;
if(numero==1)
{
valorf = investimento+(investimento*0.005);
cout  << valorf << endl;}
else
{
valorf = investimento+(investimento*0.03)-30.00;
cout << valorf << endl;}

return 0;
}
