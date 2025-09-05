### Decimal number to binary conversion
``` c
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[100];
    int i=0;
    while(n>0)
    {
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    for(int j=i-1;j>=0;j--)       //we need to print in the reverse order
    {
        printf("%d ",arr[j]);
    }
}
```
