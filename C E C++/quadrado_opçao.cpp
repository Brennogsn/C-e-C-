#include <iostream>
#include <stdio.h>
using namespace std;
int main ()
{
	int opcao;
	float l, area, r, areac;
	cout<<"\n1 Calculo da area do quadrado";
	cout<<"\n2 Calculo da area do circulo"; 
	cout<<"\nEscolha a variavel desejada:";
	cin >> opcao;
	if (opcao==1)
		{
			cout << "\nVoce escolheu a area do quadrado";
			cout << "\nInsira o lado do quadrado:"; cin>> l;
			area=l*l;
			cout << "\nA area do quadrado sera:\n" << area;
		}
	else
		if(opcao==2)
			{
				cout << "\nVoce escolheu a area do circulo";
				cout << "\nInsira o raio do circulo"; cin>> r;
				areac=3.1416*r*r;
				cout << "\nA area do circulo sera:\n" << areac;
			}
		else
			cout<<"\nEscolha entre o numero 1 e 2";
	return 0;
	

		
	
}
