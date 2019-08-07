#include <iostream>
using namespace std;


int main()
{
		
	float l1, l2, perimetro, area;	
	cout<<"\nqual o lado 1 ?\n";	
	cin>> l1;	
	cout<<"\nqual o lado 2 ?\n";	
	cin>> l2;
	perimetro=(l1+l1)+(l2+l2);
	area=l1*l2;
	cout<<"\nPerimetro\n" << perimetro << "\n";
	cout<<"\nArea\n" << area << "\n";	
	system("pause");
	return 0;

}
