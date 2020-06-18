#include <iostream>

using namespace std;

int main ( )
{
int tempo;
cin >> tempo;
int hora, min;
float seg;
hora = tempo/3600000;
min = (tempo-(hora*3600000))/60000;
seg = (tempo-(hora*3600000)-(min*60000))/1000;
cout << hora << " "<< ":" << " "<< min <<" "<< ":"<< " " << seg << endl;


return 0;
}


