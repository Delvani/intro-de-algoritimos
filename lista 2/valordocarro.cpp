#include <iostream>

using namespace std;

int main ( )
{
float  custo, valorf, valorcon;
cin >> custo;
if(custo<=20000)
{
valorf = custo+(custo*0.05);
cout  << valorf << endl;
}
else if  (custo>20000&&custo<=40000)
{
valorcon = custo+(custo*0.10);
valorf = valorcon+(valorcon*0.30);
cout << valorf << endl;
}

else
{
valorcon = custo+(custo*0.15);
valorf = valorcon+(valorcon*0.45);
cout << valorf  << endl;
}
return 0;
}
