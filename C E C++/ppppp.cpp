#include <iostream>
using namespace std;
int main()
{
	int c,a=10;
	int*p;
	p=&a;
	c=*p+100;
	
	cout <<"\nendereco de a, usando p = "<<p;
		cout <<"\nendereco de a, usando &a = "<<&a;
			cout <<"\nValor de c  = "<<c;
			return 0;
}
