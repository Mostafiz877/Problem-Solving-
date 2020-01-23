#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int length=s.length();
    for(int i=0;i<length;i++)
    {
        if(s[i]!='A'&& s[i]!= 'E' && s[i]!= 'I' && s[i]!= 'O' && s[i]!= 'U'&& s[i]!= 'Y' && s[i]!='a'&& s[i]!= 'e' && s[i]!= 'i' && s[i]!= 'o' && s[i]!= 'u'&& s[i]!= 'y')
        {
            if(s[i]<97)
            {
              printf(".");
              printf("%c",s[i]+32);
            }else
            {
              printf(".");
              printf("%c",s[i]);
            }

        }
    }
}
