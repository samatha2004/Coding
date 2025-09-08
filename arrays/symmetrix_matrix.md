### Symmetric matrix
``` c
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n],brr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int k;
    for(int i=0;i<n;i++)
    {   k=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i][j] !=arr[j][i])
            {   k=1;
                printf("not symmetric");
                break;
            }
        }
        if(k==1)
        {
            printf("not symetric");
            break;
        }
    }
    if(k==0)
    {
        printf("symmetric");
    }
}
```
