#include <iostream>
using namespace std;

int main()
{
	float s, s1, s2, s3, s4;
	cout<<"\ndigite o salario:\n";
	cin>> s;
	s1=s*0.05;
	s2=s*0.10;
	s3=s1+s;
	s4=s2+s;
	
	if (s>5000)
	cout<<"\nOsalario sera:" << s3 << "\n";
	else 
	cout<<"\nOsalario sera:" << s4 << "\n";
	system("pause");
	return 0;
}
