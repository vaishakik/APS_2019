#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,ar[100]={0},A=0,B=0;
    long long int k,n1,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {   A=0;
        B=0;
        scanf("%lld %lld %lld %lld",&n1,&a,&b,&k);
        for(j=1;j<=n1;j++)
        {
            if(j%a==0 && j%b!=0)
              A++;
            else if(j%b==0 && j%a!=0)
            B++;
        }
        if(A+B>=k)
            printf("Win\n");
          else
            printf("Lose\n");

    }


    return 0;
}
