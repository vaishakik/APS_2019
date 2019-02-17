#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   long long int  n,*a,max=-999999999999999,flag=0,max1=-999999999999999,i,c=0;
    scanf("%lld",&n);
    if(n<2)
        flag=1;
    a=(long long int*)malloc(n*sizeof(long long int));
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]<-1000000 || a[i]==0)
            flag=1;
        if(a[i]>=max1)
        {
            max1=a[i];
            c++;

        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max && a[i]!=max1)
        {
            max=a[i];
        }
    }
    if(c==n || flag==1 || max==max1)
        printf("-1");
    else
        printf("%lld",max);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
