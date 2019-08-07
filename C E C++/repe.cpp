#include <iostream>

using namespace std;

int main (){
	int n, cont;
	char d[10];
	
	cout <<"\n Digite o numero de linhas para ser repetido: \n"; cin >> n;
	cout <<"\n Digite algo para aparecer na tela: \n"; cin >> d;

	cont = 0;
	
	while(cont<n)
		{
			cout << d << "\n";	
			cont= cont+1;
		}
		 
	return 0;
	
	
}
