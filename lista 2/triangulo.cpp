#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){
	
		int x,y,z;
		cin >> x >> y >> z;
		
		if(x>(y+z)||y>(x+z)||z>(x+y)){
			 cout << -1 << endl;
		}
		else{
			if((x==y && x==z)||(y==x && y==z)||(z==x && z==y)){
				cout << "equilatero" << endl;
			}
			else if((x==y && x!=z)||(z==x && y!=z)||(z==y && z!=x)){
				cout << "isosceles" << endl;
			}
			else if((x!=y && x!=z)||(y!=x && y!=z)||(z!=x && z!=y))
				cout << "escaleno" << endl;
			}						
			 
			 
			 	
	
return 0;
}
