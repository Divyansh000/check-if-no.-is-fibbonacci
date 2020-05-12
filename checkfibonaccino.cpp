#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0,x=0,a1=0,a2=0,n1,n2;
    double z1=0,z2=0;
    cin>>t;
    while(t--)
    {
        cin>>x;
        a1=((5*x*x)+4);
        a2=((5*x*x)-4);
        //cout<<"a1 ="<<a1<<" a2 = "<<a2<<endl;
        z1=sqrt(a1);
        z2=sqrt(a2);
        //cout<<"z1 ="<<z1<<" z2 = "<<z2<<endl;
        n1=floor(z1);
        n2=floor(z2);
        //cout<<"a1 ="<<a1<<" a2 = "<<a2<<endl;
        if((n1*n1)==a1||(n2*n2)==a2)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
    return 0;
}
