//Program to find the longest increasing subsequence

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i,j,n,*a,*b,max=0,prev=0;
    printf("\nEnter the no of array size ");
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        b[i]=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]<a[i] && b[i]<(b[j]+1))
                b[i]=b[j]+1;
        }
    }
    printf("\nThe array reference ");
    for(i=0;i<n;i++)
        printf("%d ",b[i]);
    max=b[0];
    for(i=1;i<n;i++)
    {
        if(b[i]>max)
            max=b[i];
    }
    printf("\nThe maximum length of longest increasing sub-sequence is: %d",max);
    printf("\nThe longest increasing sub-sequence is: ");
    prev=0;
    for(i=0;i<n;i++)
    {
        if(b[i]==prev+1)
        {
            prev=b[i];
            printf("%d ",a[i]);
        }
        else if(b[i]==prev)
            printf("or %d",a[i]);
    }
    return 0;
}
