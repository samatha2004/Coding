### Address of the array
``` c
#include<stdio.h>
int main()
{
int n,*p;
scanf("%d",&n);
int arr[n];
p=arr;
for(int i=0;i<n;i++)
{
scanf("%d",p+i);               //&p[i]
printf("%p ",p+i);
printf("%d ",p[i]);
}
}
```
