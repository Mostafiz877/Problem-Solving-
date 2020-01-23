#include<iostream>
using namespace std;
 int main()
 {
     string s;
     cin>>s;
     int one=0;
     int two=0;
     int three=0;

     for(int i=0;i<s.length();i++)
     {
         if(s[i]=='1')
         one++;
         else if(s[i]=='2')
            two++;
         else if(s[i]=='3')
            three++;
     }
     s="";
     for(int i=1;i<=one;i++)
     {
        s+="1+";
     }

    for(int i=1;i<=two;i++)
     {
        s+="2+";
     }

         for(int i=1;i<=three;i++)
     {
        s+="3+";
     }



     s.erase(s.length()-1);
     cout<<s<<endl;

     return 0;
 }
