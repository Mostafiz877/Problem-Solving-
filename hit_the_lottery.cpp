#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    int n;
    int remainder;
    int money_count=0;
    cin>>number;

    if(number>=100)
    {
        n=100;
        remainder=number;

    }else if(number>=20)
    {
        n=20;
        remainder=number;
    }else if(number>=10)
    {
        n=10;
       remainder=number;

    }else if(number>=5)
    {
        n=5;
        remainder=number;
    }else
    {
        n=1;
        remainder=number;
    }


    switch(n)
    {
    case 100:
        if(remainder%100==0)
        {

            money_count=money_count+remainder/100;
            cout<<money_count<<endl;
            return 0;

        }else if(remainder>100)
        {
            money_count=money_count+remainder/100;
            remainder=remainder%100;
        }
        case 20:
            if(remainder%20==0)
            {

              money_count=money_count+remainder/20;
              cout<<money_count<<endl;
              return 0;
            }else if(remainder>20)
            {
                money_count=money_count+remainder/20;
                remainder=remainder%20;
            }
        case 10:

            if(remainder%10==0)
            {
              money_count=money_count+remainder/10;
              cout<<money_count<<endl;
              return 0;
            }else if(remainder>10)
            {
                money_count=money_count+remainder/10;
                remainder=remainder%10;
            }


        case 5:

            if(remainder%5==0)
            {
              money_count=money_count+remainder/5;
              cout<<money_count<<endl;
              return 0;
            }else if(remainder>5)
            {
                money_count=money_count+remainder/5;
                remainder=remainder%5;
            }
        case 1:
            if(remainder>=1)
            {
                money_count=money_count+remainder/1;
            }

    }

    cout<<money_count<<endl;
}
