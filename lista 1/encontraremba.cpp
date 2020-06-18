#include <iostream>

using namespace std;

int main ( )
{
int  numero;
cin >> numero;

if(numero%6==0)
cout  << numero/6 << endl;
else
cout << (numero/6) +1 << endl;

return 0;
}
