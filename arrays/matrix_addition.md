### Matrix addition
```c
#include<stdio.h>
int main()
{
int n,m,k,l;
scanf("%d %d %d %d",&n,&m,&k,&l);
if(n==k && m==l)
{
int arr[n][m],brr[n][m];
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
scanf("%d",&arr[i][j]);
}
}

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
scanf("%d",&brr[i][j]);
}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
arr[i][j]+=brr[i][j];
}
}

for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
printf("%d",arr[i][j]);
}
printf("\n");
}
}
else
{
printf("not ppossible");
}
}
```
