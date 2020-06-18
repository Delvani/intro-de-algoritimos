# include  <iostream>

using  namespace  std ;

int  main () {
	
	float n, soma=0, aux, maior, segmaior;
	int cont=0;
	cin >> maior >> segmaior;
	if (segmaior>maior)
	{
		aux=maior;
		maior=segmaior;
		segmaior = aux;
	}
	soma= maior+segmaior;
	while (cont<5)
	{
		cin >> n;
		if (n>maior)
		{
			aux = maior;
			maior = n;
			segmaior = n;
		}
		else if (n>segmaior)
		{
			segmaior = n;
			soma+=n;
			cont ++;
		}
	}
	cout << maior << endl << segmaior << endl<<(soma - maior -segmaior)/5.0 << endl;
	return 0 ;
}
