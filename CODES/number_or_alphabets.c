#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,n1[100],alpha=0,num=0,b[100]={0};
    char a[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         alpha=0;
        num=0;
    scanf("%d",&n1[i]);
    for(j=0;j<n1[i];j++)
        {
            scanf("%1s",&a[j]);
            if((a[j]+0>96 && a[j]+0<123)  || (a[j]+0>64  && a[j]+0<91))
            {
              alpha++;
             // printf("%d",alpha);
            }
            else
                num++;
              //  printf("%d",num);
        }
        if(alpha>num)
        {
           b[i]=0;
        }
        else
            b[i]=1;
    }

    for(i=0;i<n;i++)
    {
        if(b[i]==0)
            printf("ALPHABET\n");
        else if(b[i]==1)
            printf("NUMBER\n");
    }
    return 0;
}
