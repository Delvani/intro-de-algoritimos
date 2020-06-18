#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){

		float h,he,hf;
		cin >> he >> hf;
		h = he-(2/3*(hf));
		h*=60;
		if(h > 2400)
			cout << 500 << endl;
		else if(h > 1800 and h <= 2400)
			cout << 400 << endl;
		else if(h > 1200 and h <= 1800)
			cout << 300 << endl;
		else if(h > 600 and h <= 1200)
			cout << 200 << endl;
		else if(h <= 600)
			cout << 100 << endl;
return 0;
}	
