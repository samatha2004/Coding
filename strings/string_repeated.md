### Repeated string
``` c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char ch[1000][1000];
    int n;
    scanf("%d",&n);
    int count[n],max=0,index=0;
    for(int i=0;i<n;i++)
    {
        scanf("%s",ch[i]);
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            if(strcmp(ch[i],ch[j])==0)
            {
                count[i]++;
            }
        }
        if(count[i]>max)
        {
            max=count[i];
            index=i;
        }
    }
    printf("%s",ch[index]);
}
```
