#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int n,m;
 scanf("%lld %lld",&n,&m);
    if(n>0 && m>0 && m<=1000000 && n<=1000000)
    {
    if(n<=m)
    {
        printf("%lld",n);
    }
    else if(n>m)
    {
       while(1)
       {
           n=n-m;

           if(n<m)
               break;

       }
        if(n==0)
           printf("%lld",m);
        else
            printf("%lld",n);
    }
    else
        printf("-1");
    }
    else
       printf("-1");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
