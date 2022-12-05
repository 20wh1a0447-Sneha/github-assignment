#include<iostream>
#include<math.h>
 
using namespace std;
 
int main()
{
    int vi=0;
    float a=9.8,d=20,vf;
     cin>>a>>d>>vi;
     vf=sqrt(vi*vi+2*a*d);
    cout<<vf;
    
    return 0;
}
