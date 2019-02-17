#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m,i,j;
    int a1[25][25],a2[25][25],k=0,l=0,flag=0,c=0;
    int a[25];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i!=j && a[i]+a[j]==m && a[i]<a[j] && a[i]>-21 && a[j]>-21)
            {
                a1[k][0]=a[i];
                a1[k][1]=a[j];
                k++;
                //printf("%d %d\n",a[i],a[j]);

            }
        }
    }

    for(i=0;i<k;i++)
    {
    for(j=i+1;j<k;j++)
    {
        if(a1[i][0] == a1[j][0] && a1[i][1] == a1[j][1])
            {
                /* Delete the current duplicate element */
                for(l=j; l<k; l++)
                {
                    a1[l][0] = a1[l + 1][0];
                    a1[l][1] = a1[l + 1][1];
                }


                k--;


                j--;
            }
    }}
   for(i=0;i<k;i++)
    {
    printf("%d %d\n",a1[i][0],a1[i][1]);
    }


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
