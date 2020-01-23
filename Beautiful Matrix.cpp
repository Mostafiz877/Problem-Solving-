#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool ax[5][5];
    bool value;
    int row;
    int column;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>value;
            ax[i][j]=value;
            if(value==1)
            {
                row=i;
                column=j;
            }
        }
    }


    cout<<abs(2-row)+abs(2-column)<<endl;



    return 0;
}
