#include<stdio.h>
int main()
{
    int i,j,n,k;
    int a[51];
    scanf("%d%d",&n,&k);
    int c=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i<k && a[i])
            c++;
    }
    j=k-1;
    while(a[j]==a[j+1])
        j++;
    if(a[j]>0)
        c+=j-k+1;
    printf("%d\n",c);
    return 0;
}
