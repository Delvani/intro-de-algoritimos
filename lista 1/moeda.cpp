#include <iostream>

using namespace std;

int main ( )
{
int  quantia,v,d,c,dd,u,cc,ccc;
cin >> quantia;
cc = quantia/100;
ccc = (quantia-(cc*100))/50;
v = (quantia-(cc*100)-(ccc*50))/20;
d = (quantia-(cc*100)-(ccc*50)-(v*20))/10;
c = (quantia-(cc*100)-(ccc*50)-(v*20)-(d*10))/5;
dd = (quantia-(cc*100)-(ccc*50)-(v*20)-(d*10)-(c*5))/2;
u = (quantia-(cc*100)-(ccc*50)-(v*20)-(d*10)-(c*5)-(dd*2));
cout << cc << endl;
cout << ccc << endl;
cout << v << endl;
cout << d <<endl;
cout << c << endl;
cout << dd <<endl;
cout << u << endl;

return 0;
}
