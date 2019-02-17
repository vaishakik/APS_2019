//Program to find the two's complement of a given number.

//can be done using either
//1) -n
//2) ~n+1

#include<stdio.h>

int main()
{
    int n,r1,r2;
    printf("\nEnter a number");
    scanf("%d",&n);
    r1=-n;
    r2=~n+1;
    printf("\nThe 2's complement of %d using -%d is :%d",n,n,r1);
    printf("\nThe 2's complement of %d using ~%d+1 is: %d",n,n,r2);
    return(0);
}
