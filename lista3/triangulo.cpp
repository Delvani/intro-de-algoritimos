#include <iostream>

using namespace std;

int main ( )
{
int n;
	cin >> n;
	int ntri =0;
	while (n>=1)
	{
		ntri+=n;
		n--;
	}
	
	cout <<  ntri  << endl;
	return 0;
}
