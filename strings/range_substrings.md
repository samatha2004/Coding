### Substrings of a string within the range
```c
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void print_substrings(char str[100],int k,int l)
{

for(int i=k;i<=l;i++)
{
for(int j=i;j<=l;j++)
{

for(int k=i;k<=j;k++)
{
printf("%c",str[k]);
}
printf(" ");
}
printf(" ");
}
}
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int k,l;
    scanf("%d %d",&k, &l);
    print_substrings(str,k,l);
}
```
