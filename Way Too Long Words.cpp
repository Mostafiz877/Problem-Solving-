#include<bits/stdc++.h>
using namespace std;
int main()
{
    stringstream ss;
    int n,length;
    string s1,s2;
    cin>>n;

    for(int i=0;i<n;i++)
    {
     cin>>s1;
     length=s1.length();

        if(length<=10)
        {
            s2+=s1;
            s2+="\n";

        }else
        {
            ss.str("");
            ss<<length-2;
            s2+=s1[0];
            s2+=ss.str();
            s2+=s1[length-1];
            s2+="\n";
        }

    }

    cout<<s2<<endl;
    return 0;
}
