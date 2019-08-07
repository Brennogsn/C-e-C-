#include <iostream>
using namespace std;
int main ()
{
	float av1, av2, media;
	cout<<"\nInsira a primeira nota:\n";    cin>>av1;
	cout<<"\nInsira a segunda nota:\n";    cin>>av2;
	media=(av1+av2)/2;
	if (media>=6)
		{
			cout<<"\nAprovado";
			if(media>=9)
				cout<<"\nParabens!";
		}
	else
		{
			if(media>=2)
				cout<<"\nExame";
			else
				cout<<"\nReprovado";	
			
		}	
	return 0;
	
	
	
}
