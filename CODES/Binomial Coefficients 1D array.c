#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int min(int i,int j)
{
    if(i<j)
        return i;
    else
        return j;
}
int bin_coff(int n,int k)
{
    int c[k+1];
    int i,j;
    memset(c,0,sizeof(c));
    c[0]=1;
    for(i=0;i<=n;i++)
    {
        for(j=min(i,k);j>0;j--)
        {
            c[j]=c[j]+c[j-1];
            printf("%d ",c[j]);
        }
    }
    return c[k];
}
int main()
{
    int n,k,f;
    scanf("%d %d",&n,&k);// 5 3 =10
    f=bin_coff(n,k);
    printf("%d",f);

    return 0;
}
