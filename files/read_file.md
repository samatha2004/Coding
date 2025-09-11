### Reading a file
```c
include<stdio.h>
int main()
{
    char str[100];
    FILE *fp=fopen("read.txt","r");
    if(fp==NULL)
    {
        printf("the file is empty");
        return 1;
    }
    else
    {
        while(fgets(str,sizeof(str),fp))
        {
            printf("%s",str);
            printf("\n");
        }

    }
}
```
