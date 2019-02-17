//Program to check if a number is a power of 2 or not
//returns zero if it is a power of 2 or it returns other number if it is not a power of 2.
#include<stdio.h>

int main()
{
    int n,res;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    res=n&(n-1);
    if(res==0)
        printf("\n%d is a power of 2",n);
    else
        printf("\n%d is not a power of 2",n);
    return 0;
}
