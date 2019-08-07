#include <iostream>
using namespace std;
float fat(float a)
{
	float resultado = 1;
	for (int i=a ; i>1 ;i--)
		resultado =resultado *i;
		
	return  resultado ;
}

int main ()

{
	float n, calculo;
	cout<< "entre com um numeor inteiro ";
	cin >> n;
	calculo = fat(n);
	cout<<"\n Fatorial de n = "<< n << " eh "<<calculo<<" \n ";

}
