#include<iostream>
using namespace std;
int main()
{
    int ax[26]={0};
    int sum=0;
    string s;
    cin>>s;
    int temp;


    for(int i=0;i<s.length();i++)
    {

        ax[s[i]-97]=1;

    }

    for(int i=0;i<26;i++)
    {
        sum+=ax[i];

    }

    if(sum%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
}
