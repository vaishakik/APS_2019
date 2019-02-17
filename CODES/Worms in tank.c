
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


int n;
int isSafe(int M[][10], int row, int col, bool visited[][10])
{
    return (row >= 0) && (row < n) &&
        (col >= 0) && (col < n) &&
        (M[row][col] && !visited[row][col]);
}

void DFS(int M[][10], int row, int col, bool visited[][10])
{
    static int rowNbr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    static int colNbr[] = {-1, 0, 1, -1, 1, -1, 0, 1};
    visited[row][col] = true;
    for (int k = 0; k < 8; ++k)
        if (isSafe(M, row + rowNbr[k], col + colNbr[k], visited) )
            DFS(M, row + rowNbr[k], col + colNbr[k], visited);
}

int countIslands(int M[][10])
{
    bool visited[10][10];
    memset(visited, 0, sizeof(visited));
    int count = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            if (M[i][j] && !visited[i][j]) 
            {                         
                DFS(M, i, j, visited);     
                ++count;                
            }

    return count;
}

int main()
{  int i,j;

    int M[10][10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&M[i][j]);
        }
    }

    printf("%d\n", countIslands(M));

    return 0;
}
