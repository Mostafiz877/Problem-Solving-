#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0;
    int n;
    cin>>n;
    string ch;

    for(int i=1;i<=n;i++)
    {
        cin>>ch;
        (ch[1]=='+')? x++:x--;
    }

    cout<<x<<endl;

    return 0;
}
