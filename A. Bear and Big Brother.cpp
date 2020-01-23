#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cin>>l>>b;
    int i=0;

    while(1)
    {
        i++;
        l=l*3;
        b=b*2;
        if(l>b)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}
