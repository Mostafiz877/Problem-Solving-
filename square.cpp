#include<bits/stdc++.h>
using namespace std;
int main()
{
     unsigned long long int a,b,c;
     long long int r1,r2;
    cin>>a>>b>>c;

    if(a%c==0)
    {
        r1=a/c;
    }else
    {
        r1=ceil((a/(float)c));
    }


        if(b%c==0)
    {
        r2=b/c;
    }else
    {
        r2=ceil((b/(float)c));
    }

    cout<<r1<<endl;
    cout<<r2<<endl;

    cout<<r1*r2<<endl;


    cout <<sizeof(a);

    return 0;

}
