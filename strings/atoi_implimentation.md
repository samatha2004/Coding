### Atoi implimentation
``` c
#include<stdio.h>
#include<string.h>
int main()
{
char str[100],c;
scanf("%s",str);
int n=strlen(str),num=0;
int flag;
int k=0;
while(str[k]==' ')
{
k++;
}
while(str[k]=='+' || str[k]=='-')
{
flag=1;
if(str[k]=='-')
{
flag=0;
}
k++;
}
for(int i=k;i<n;i++)
{
if(str[i]>='0' && str[i]<='9')
{
c=str[i]-'0';
num=num*10+c;
}
else
{
break;
}
}
if(flag==0)
{
printf("-%d",num);
}
if(flag==1)
{
printf("+%d",num);
}
if(flag!=0 && flag!=1)
{
printf("%d",num);
}
}
```
