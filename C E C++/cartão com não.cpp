#include <iostream> 
using namespace std;
#include <cmath>
int main ()
{
int a,b,c ,delta,x1,x2;
cout<<"\ calcule  as raizes da equacao de 2g \n";
cout<<"\n digite um numero \n";
cin>>a; 
cout<<"\n digite um numero \n";
cin>>b;
cout<<"\n digite um  numero \n ";
cin>>c;
delta=b*b-4*a*c;
cout<<"\n seu delta e \n"<<delta;
x1=(b-sqrt(delta));
cout<<"\n a raiz e \n"<<x1;
x2=(b+sqrt(delta));
cout<<"\n a raiz e  \n"<<x2;

return 0;
}

