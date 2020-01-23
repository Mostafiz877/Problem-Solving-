#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=0;
    int f=0;
    char previous;
    char current;
    char input;


   for(int i=0;i<n;i++)
    {

        if(i==0)
        {

        cin>>input;
        previous=input;
        continue;

        }

        cin>>input;
        current=input;

        if(previous=='S' && current=='F')
        {
            s++;
        }
        else if(previous=='F' && current=='S')
        {
            f++;
        }

        previous=current;
    }

    if(s>f)
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
