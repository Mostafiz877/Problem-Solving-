#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int one_count=0;
    int zero_count=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
        {
            zero_count++;
            one_count=0;
            if(zero_count==7)
            {
                cout<<"YES"<<endl;
                return 0;
            }

        }else
        {
          one_count++;
          zero_count=0;


            if(one_count==7)
            {
                cout<<"YES"<<endl;
                return 0;
            }


        }
    }

    cout<<"NO"<<endl;
    return 0;
}
