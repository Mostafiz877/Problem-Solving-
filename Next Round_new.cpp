#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    int com=0;
    int sum=0;
    int input;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {

        cin>>input;
        if(i==k-1)
        {
            com=input;
        }

        if(i<k-1 && input>0)
        {
            sum++;
        }
        else if(input>=com && i>=k-1 &&input>0)
        {
           sum++;
        }

    }


    cout<<sum<<endl;
    return 0;
}
