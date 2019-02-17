#include <stdio.h>
#include <stdlib.h>
int* fibo(int n)
{
    int fib[n+1];
    int i;
    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < n + 1; i++)
        fib[i] = fib[i - 1] + fib[i - 2];

    return fib;
}

int main()
{   int n,st,en,sum=0,i,j,flag;
    scanf("%d",&n);
    int fib[100];
    fib[0] = 0;
    fib[1] = 1;

    for (i = 2; i < n + 1; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    scanf("%d %d",&st,&en);
    for(i=st; i<=en; i++)
	{
		flag=0;
		for(j=2; j<fib[i]; j++)
		{
			if(fib[i]%j==0)
			{
				flag = 1;
				break;
			}
		}
		if(flag==0)
			sum=sum+fib[i];
	}
	printf("%d",sum);
    return 0;
}
