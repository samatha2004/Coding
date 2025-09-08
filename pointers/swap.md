### Swapping two variables using pointers
``` c
#include<stdio.h>
int main()
{
int n,m,*p=&n,*q=&m;
scanf("%d %d",p,q);
*p=*p+*q;
*q=*p-*q;
*p=*p-*q;
printf("%d %d",*p,*q);
}
```
