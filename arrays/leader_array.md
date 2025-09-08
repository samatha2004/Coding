### Leader elements in an array
``` c
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int f=0,flag,result[n];
    for(int i=0;i<n;i++)
    {
        flag=1;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            result[f++]=arr[i];
        }
    }
    for(int i=0;i<f;i++)
    {
        printf("%d ",result[i]);
    }
}
```
