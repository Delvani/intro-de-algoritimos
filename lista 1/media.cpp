#include <iostream>

using namespace std;

int main ( )
{
int  quantia,valor,troco,v,d,c,dd,u;
cin >> quantia;
cin >> valor;
troco = quantia- valor;
v = troco/20;
d = (troco-v*20)/10;
c = (troco-(v*20)-(d*10))/5;
dd = (troco-(v*20)-(d*10)-(c*5))/2;
u = (troco-(v*20)-(d*10)-(c*5)-(dd*2));

cout << v << endl;
cout << d <<endl;
cout << c << endl;
cout << dd <<endl;
cout << u << endl;

return 0;
}
