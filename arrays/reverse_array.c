### Reversing an array
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
int start=0,end=n-1,temp;
while(start<=end)
{
temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
start++;
end--;
}
for(int i=0;i<n;i++)
{
printf("%d ",&arr[i]);
}
}
