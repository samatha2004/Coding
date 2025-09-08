### The most repeated character in a string
``` c
#include<stdio.h>
#include<string.h>
int main()
{
char str[100],c;
fgets(str,sizeof(str),stdin);
int n=strlen(str),max=0,count;
for(int i=0;(str[i]!='\n' && str[i]!='\0');i++)
{
count=0;
for(int j=0;j<n;j++)
{
if(str[i]==str[j])
{
count++;
}
}
if(count>max)
{
max=count;
c=str[i];
}
}
printf("%c %d",c,max);
}
```
