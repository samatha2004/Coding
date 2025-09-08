### Seperate odd and even elements in an array
```c
#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n],even[n],odd[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int e=0,o=0;
for(int i=0;i<n;i++)
{
if(arr[i]%2==0)
{
even[e++]=arr[i];
}
else
{
odd[o++]=arr[i];
}
}
for(int i=0;i<e;i++)
{
printf("%d ",even[i]);
}
printf("\n");
for(int i=0;i<o;i++)
{
printf("%d ",odd[i]);
}
}
```
