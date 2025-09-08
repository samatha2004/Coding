### Anagram
``` c
include<stdio.h>
#include<string.h>
int main()
{
char str1[100],str2[100];
fgets(str1,sizeof(str1),stdin);
fgets(str2,sizeof(str2),stdin);
int n,m;
n=strlen(str1);
m=strlen(str2);
int flag=1;
if(n!=m)
{
flag=0;
}
else
{
for(int i=0;i<n;i++)
{
int c=0;
for(int j=0;j<n;j++)
{
if(str1[i]==str2[j])
{
str2[j]='*';
c=1;
break;
}
}
if(c==0)
{
flag=0;
break;
}
}
}
printf("%s",(flag==1)?"anagram":"not anagram");
}
```



