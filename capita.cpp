#include<iostream>
using namespace std;
int main()
{
    string ch;
    cin>>ch;
    (ch[0]>='a' && ch[0]<='z')? ch[0]=ch[0]-32: ch[0]=ch[0] ;
    cout<<ch<<endl;
    return 0;
}

