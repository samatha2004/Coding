### Longest word in a string
``` c
#include<stdio.h>
#include<string.h>
char* substring(int i,int max,char str[])
{
static char ls[100];
int l=0;
for(int k=i-max;k<i;k++)
{
ls[l]=str[k];
l++;
}
ls[l]='\0';
return ls;
}
int main()
{
char str[100];
char *ls;
fgets(str,sizeof(str),stdin);
int n=strlen(str);
int count,max;
for(int i=0;str[i]!='\n' && str[i]!='\0';i++)
{
count=0;
for(int j=i;j<n;j++)
{
if(str[i]!=' ')
{
count++;

}
}
if(count>max)
{
max=count;
ls=substring(i,max,str);
}
}
```
