#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    __int64 n,m,a;
cin>>n>>m>>a;

        __int64 x=n/a,y=m/a;
        if(n%a)x++;
        if(m%a)y++;
        cout<<x*y<<endl;
    return 0;
}
