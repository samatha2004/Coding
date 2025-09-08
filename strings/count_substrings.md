### Count number of substrings in an array
``` c
#include<stdio.h>
#include<string.h>
int main()
{
char str[100],sstr[50];
scanf("%s %s",str,sstr);
int flag,count=0;
for(int i=0;str[i]!='\0';i++)
{
flag=1;
if(str[i]==sstr[0])
{
for(int j=0;sstr[j]!='\0';j++)
{
if(str[i+j]!=sstr[j])
{
flag=0;
break;
}
}
if(flag==1)
{
count++;
}
}
}
printf("%d",count);
}
```
