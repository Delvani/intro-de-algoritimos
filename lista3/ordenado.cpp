# include  <iostream>

using  namespace  std ;

int  main () {
	
	int n, aux, tes=1, con=0;
	cin >> n;
	while (con <4)
	{
		aux = n;
		cin >>n;
		if (aux >n)
		{
			tes =0;
		}
		con ++;
	}
	cout << tes << endl;
	return 0 ;
}
