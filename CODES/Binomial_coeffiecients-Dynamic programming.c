#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5,a[15][15],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
          if(j==0 || i==j)
          {
              a[i][j]=1;
          }
          else
          {
              a[i][j]=a[i-1][j-1]+a[i-1][j];
          }
          printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
