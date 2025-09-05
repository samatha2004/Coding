###Matrix multiplication
the condition to do matric multiplication is the no of columns of 1st matrix must equal to the no of rows of 2nd matrix
```c
#include<stdio.h>
int main()
{
    int n,m,a,b;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int brr[a][b];
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    if(m==a)
    {
        int c[n][b];
        for(int i=0;i<n;i++)
        {

            for(int j=0;j<b;j++)
            {
                c[i][j]=0;
                for(int k=0;k<m;k++)
                {
                    c[i][j]+=arr[i][k]*brr[k][j];
                }
            }
        }
 for(int i=0;i<n;i++)
        {
            for(int j=0;j<b;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }

    }
    else
    {
        printf("multiplication not possible");
    }
}
