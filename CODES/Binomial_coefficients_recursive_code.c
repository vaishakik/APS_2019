//Program to find the particular binomial coefficients using recursive functions

#include<stdio.h>

int bin_coeff(int n,int k)
{
    if(k==0||k==n)
        return 1;
    else
        return bin_coeff(n-1,k-1)+bin_coeff(n-1,k);
}

int main()
{
    int n,k,res;
    printf("Binomial coefficients: ");
    printf("\nEnter n: ");
    scanf("%d",&n);
    printf("Enter k: ");
    scanf("%d",&k);
    if(n>=k)
    {
      res=bin_coeff(n,k);
      printf("\nThe value of binomial coefficients for n= %d and k= %d is: %d",n,k,res);
    }
    else
        printf("\nThe binomial coefficients is not possible");
    return 0;
}
