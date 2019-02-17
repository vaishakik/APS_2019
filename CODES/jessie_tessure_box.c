#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,i,j,max=0;
   char a[30];
   int b[30]={0};
   scanf("%d",&n);
   scanf("%s",a);
   printf("%s",a);
   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
         if(a[i]==a[j] && i!=j)
         {
             b[i]=b[i]+1;
         }
       }
   }
   for(i=0;i<n;i++)
   {
       printf("%d",b[i]);
     if(b[i]>max)
     {
        max=b[i];
        j=i;
     }
   }
   printf("%c",a[j]);
    return 0;
}
