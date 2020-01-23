#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3,s4,s5,s6;
    cin>>s1>>s2>>s3>>s4>>s5>>s6;
    char check1=s1[0];
    char check2=s1[1];

    if(check1==s2[0] || check1==s3[0] || check1==s4[0] || check1==s5[0] || check1==s6[0])
    {
        cout<<"YES"<<endl;
    }
    else if(check2==s2[1] || check2==s3[1] || check2==s4[1] || check2==s5[1] || check2==s6[1])
    {
        cout<<"YES"<<endl;
    }else
    {
        cout<<"NO"<<endl;
    }

}
