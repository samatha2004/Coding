### Delete a word in a string
```c
#include<stdio.h>
#include<string.h>
int main()
{
char str[100],sstr[50];
fgets(str,sizeof(str),stdin);
scanf("%s",sstr);
int n=strlen(sstr);
int flag,c=0;
for(int i=0;(str[i]!='\0' && str[i]!='\n');i++)
{
flag=1;
if(str[i]==sstr[0])
{
for(int j=0;j<n;j++)
{
if(str[i+j]!=sstr[j])
{
flag=0;
break;
}
}
if(flag==1)
{
for(int k=i;str[k]!='\0';k++)
{
str[k]=str[k+n+1];
c=k;
}
}
}
}
str[c]='\0';
for(int i=0;str[i]!='\0';i++)
{
printf("%c",str[i]);
}
}
```
