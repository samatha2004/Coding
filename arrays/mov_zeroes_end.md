### Move all Zeroes in an array to end
```c
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
    int pos=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0)
        {
            arr[pos++]=arr[i];
        }

    }
    while(pos<n)
    {
        arr[pos++]=0;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
```
