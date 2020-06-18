# include  <iostream>

using  namespace  std ;

int  main () {
	
	
	int di;
	cin >> di;
	int n;
	cin >> n;
	while (n%di!=2)
	{
cin >> n;
		if (n%di==2)
		{
			cout << n/di << endl;
		}
		
	}
	return 0 ;
}
