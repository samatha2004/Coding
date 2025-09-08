### Remove spaces in a string
``` c
#include<stdio.h>
#include<string.h>
int main()
{
char str[100],temp;
fgets(str,sizeof(str),stdin);
int n=strlen(str),k=0;
for(int i=0;i<n;i++)
{
if(str[i]!=' ')
{
k++;
continue;

}
for(int j=i+1;j<n-1;j++)
{
temp=str[j-1];
str[j-1]=str[j];
str[j]=str[j-1];
}
}
for(int i=0;i<k-1;i++)
{

printf("%c",str[i]);
}
}
```
