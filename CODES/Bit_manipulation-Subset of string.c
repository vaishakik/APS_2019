#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a[]={'a','b','c'};
    int size1=3;
    unsigned int size2=pow(2,size1);
    int i,j;
    for(i=0;i<size2;i++)
    {
        for(j=0;j<size1;j++)
    {
        if(i &(1<<j))
            printf("%c",a[j]);
    }
    printf("\n");
    }

    return 0;
}
