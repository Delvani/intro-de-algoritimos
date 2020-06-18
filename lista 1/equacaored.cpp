#include <iostream>

using namespace std;

int main ( )
{
float x1,x2,y1,y2;
cin >> x1;
cin >> y1;
cin >> x2;
cin >> y2;
float m,q;
m = (y2-y1)/(x2-x1);
q = y1-m*x1;
cout << m <<endl;
cout << q << endl;

return 0;
}


