//Program to find whether the number is even or odd using bit manipulation.
//returns 0 if it is even, 1 if it is odd.

#include<stdio.h>

int main()
{
    int n,r;
    printf("\nEnter No: ");
    scanf("%d",&n);
    r=n&1;
    if(res==0)
        printf("\n%d is a even number.",n);
    else
        printf("\n%d is a odd number.",n);
    return 0;
}
