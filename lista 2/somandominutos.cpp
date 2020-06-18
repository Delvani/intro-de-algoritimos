#include <iostream>
using namespace std;
int main(){
		
    int dia,hor,min,dur;
    cin >> dia >> hor >> min >> dur;
    
    min += dur;
    
    int aux = min/60;
    min -= aux*60;
    hor+=aux;
    aux = hor/24;
    hor-=aux*24;
    dia+=aux;
    
    cout << dia << "  " << hor << "  " << min << endl;
    return 0;
}
