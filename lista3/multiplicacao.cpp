# include  <iostream>

using  namespace  std ;

int  main () {
	
	int n1, n2, soma=0;
	cin >> n1 >> n2;
	while (n2>=1)
	{
		soma += n1;
		cout << soma << endl;
		n2--;
	}
	
	return 0 ;
}
