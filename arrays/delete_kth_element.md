### Deleting Kth element in an array
``` c
include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k,temp;
    scanf("%d",&k);
    for(int i=k;i<n-1;i++)
    {
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    if(k>=n-1 ||  k<0)
    {
        printf("out of range");

    }
    else
    {
    for(int i=0;i<n-1;i++)
    {
        printf("%d ",arr[i]);
    }
    }
}
```
