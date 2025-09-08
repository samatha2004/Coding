### Rotational string
 ``` c
#include<stdio.h>

#include<string.h>
int main()
{
char str1[100],str2[100],temp[200];
scanf("%s %s",str1,str2);
int n,m,flag;
n=strlen(str1);
m=strlen(str2);
if(n!=m)
{
flag=0;
return 0;
}
strcat(temp,str1);
strcat(temp,str1);
for(int i=0;temp[i]!='\0';i++)
{
if(temp[i]==str2[0])
{
flag=1;

for(int j=0;str2[j]!='\0';j++)
{
if(str2[j]!=temp[i+j])
{
flag=0;
break;
}
}
if(flag==1)
{
printf("%s","rotational string");
return 0;
}
}
}

```
