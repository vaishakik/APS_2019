
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int c=0,k=0;
int n;
int result[25];
int isSafe(int M[][20], int row, int col,
        bool visited[][20])
{
    return (row >= 0) && (row < n) &&
        (col >= 0) && (col < n) &&
        (M[row][col] && !visited[row][col]);
}


void DFS(int M[][20], int row, int col,
        bool visited[][20], int *count)
{
    static int rowNbr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    static int colNbr[] = {-1, 0, 1, -1, 1, -1, 0, 1};


    visited[row][col] = true;

    for (int k = 0; k < 8; ++k)
    {
        if (isSafe(M, row + rowNbr[k], col + colNbr[k],
                                            visited))
        {
            *count= *count+1;
            DFS(M, row + rowNbr[k], col + colNbr[k],
                                    visited, count);
        }
    }
}


int largestRegion(int M[][20])
{

    bool visited[20][20];
    memset(visited, 0, sizeof(visited));

     int count = 1 ;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {

            if (M[i][j] && !visited[i][j])
            {

                count = 1 ;
                DFS(M, i, j, visited , &count);
                ++c;
                result[k] = count;
                k++;
            }
        }
    }
    return c ;
}

int main()
{ int area,max=0,i,j;
    int M[20][20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }

    area=largestRegion(M);
    for(i=0;i<k;i++)
    {
       if(result[i]>max)
            max=result[i];
    }
    printf("%d\n%d",area,max);

    return 0;
}

