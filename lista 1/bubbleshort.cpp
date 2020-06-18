#include <iostream>
#include <vector>
using namespace std;
void troca (int &a, int &b)
{
	int aux;
	aux=a;
	a=b;
	b=aux;
	}
int main ( )
{
int n ;
cin >> n;
int vet[n];
for (int i = 0; i < n; i++)
{
	cin >> vet[i];
}
 for (int fim=n-1;fim>=1;fim--) {
    for (int i=0;i<fim;i++) {
      if (vet[i]>vet[i+1]) {
	troca(vet[i],vet[i+1]);
      }
    }
  }
  
  for (int i=0;i<n;i++) {
    cout << vet[i] << " ";
  }
  cout << endl;


	return 0;
}

