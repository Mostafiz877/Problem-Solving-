#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a="I hate that";
    string ae="I hate it";
    string al="I love it";
    string b="I love that";

    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            if(i==n)
            {
                cout<<ae;
            }else
            {
                cout<<a<<" ";

            }
        }else
        {
             if(i==n)
            {
                cout<<al;
            }else
            {
                cout<<b<<" ";

            }

        }
    }

    return 0;
}
