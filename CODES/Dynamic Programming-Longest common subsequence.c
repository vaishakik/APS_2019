#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i,j,**matrix;
    char str1[100],str2[100],len1,len2;
    printf("Enter string 1: ");
    scanf("%s",str1);
    printf("\nEnter string2: ");
    scanf("%s",str2);
    len1=strlen(str1);
    len2=strlen(str2);
    matrix=(int **)malloc(sizeof(int *)*(len1+1));
    for(i=0;i<len1+1;i++)
    {
        matrix[i]=(int *)malloc(sizeof(int)*(len2+1));
    }
    memset(matrix[0],0,sizeof(int)*(len2+1));
    for(i=1;i<len1+1;i++)
        matrix[i][0]=0;
    for(i=0;i<len1;i++)
    {
        for(j=0;j<len2;j++)
        {
            if(str1[i]==str2[j])
                matrix[i+1][j+1]=matrix[i][j]+1;
            else
            {
                if(matrix[i+1][j]>matrix[i][j+1])
                    matrix[i+1][j+1]=matrix[i+1][j];
                else
                    matrix[i+1][j+1]=matrix[i][j+1];
            }
        }
    }
    printf("\nThe matrix of the longest common subsequence: \n");
    for(i=0;i<len1+1;i++)
    {
      for(j=0;j<len2+1;j++)
        printf("%d ",matrix[i][j]);
      printf("\n");
    }
    printf("\nThe length of the longest common sub-sequence among %s and %s is: %d",str1,str2,matrix[len1][len2]);
    return(0);
}
