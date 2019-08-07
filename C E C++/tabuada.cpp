#include <iostream>

using namespace std;

int main()
{
	int n, cont, r;
	cout<<"\n Digite o valor para ser feito a tabuada:\n"; cin >> n;
	
	cont=0;
	while(cont<10)
		{	                              
			cont=cont+1;	
			r = n * cont;
			cout<< r << "\n"; 
			
		}
}
