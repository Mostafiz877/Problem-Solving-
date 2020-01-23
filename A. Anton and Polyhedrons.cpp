#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string ch;
    int side=0;

    for(int i=0;i<n;i++)
    {
        cin>>ch;
        if(ch[0]=='T')
        {
            side+=4;
        }if(ch[0]=='C')
        {
            side+=6;

        }if(ch[0]=='O')
        {
            side+=8;
        }
        if(ch[0]=='D')
        {
            side+=12;
        }
        if(ch[0]=='I')
        {
            side+=20;
        }
    }

    cout<<side<<endl;

    return 0;

}
