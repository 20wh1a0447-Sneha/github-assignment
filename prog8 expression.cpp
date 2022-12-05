#include<iostream>
#include<math.h>
 
using namespace std;
 
int main()
{
float p,r,t,ci;
cout<<"Enter Principle, Rate and Time:\n";
cin>>p>>r>>t;
ci=p*pow((1+r/100),t);
cout<<"\nCompound Interest for 1 year = "<<ci;
 cout<<"\ncompund interest for 2 year = "<<ci*0.4;
 cout<<"\ncompund interest for 3 year = "<<ci*0.4*0.4;
return 0;
}
