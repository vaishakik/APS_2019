#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int n,i,s[10],t[10],min=99999999999999,max=-99999999999999,x,ver=0,flag=0;
     scanf("%lld",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%lld %lld",&s[i],&t[i]);
        if(s[i]<=0 || t[i]<=0)
            flag=1;
        x=s[i]*t[i];
        if(i==0)
            ver=x;
        else
        {
        if(x>max )
        {
            max=x;
        }
        if(x<min)
        {
            min=x;
        }
        }

    }
    if(flag==1 || n==0  || n>=10 || ver-min <0 || ver-max < 0)
        printf("NULL");
    else
        printf("%lld\n%lld\n",ver-min,ver-max);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

