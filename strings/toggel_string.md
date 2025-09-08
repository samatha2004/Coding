### Toggel a string
``` c
#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
fgets(str,sizeof(str),stdin);
int n=strlen(str);
for(int i=0;i<n;i++)
{
if(str[i]>='A' && str[i]<='Z')
{
str[i]+=32;
}
else if(str[i]>='a' && str[i]<='z')
{
str[i]-=32;
}
}
printf("%s",str);
}
```
