### Number_substrings
``` c
#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
scanf("%s",str);
int n=strlen(str);
int c=(n*(n+1))/2;
printf("%d",c);
}
```
