//Program to perform case conversion using bit-manipulation.
#include<stdio.h>

int main()
{
    char str1[40]="hEllO World",str2[40]="heLLo woRLd";
    int i;
    printf("Case conversion: ");
    printf("\nThe string before lower case conversion: %s",str1);
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]!=' ')
           str1[i]=str1[i]|(32);
    }
    printf("\nThe string after lower case conversion: %s",str1);
    printf("\nThe string before upper case conversion: %s",str2);
    for(i=0;str2[i]!='\0';i++)
    {
        if(str2[i]!=' ')
           str2[i]=str2[i]&(~32);
    }
    printf("\nThe string after upper case conversion: %s",str2);
    return(0);
}
