### Appending some text in an existing file
```c
#include<stdio.h>
int main()
{
    char str[100];
    FILE *fp=fopen("append.txt","a+");
    if(fp==NULL)
    {
        printf("the file is empty");
        return -1;
    }
    fputs("this is the append line",fp);
    rewind(fp);
    while(fgets(str,sizeof(str),fp))
    {
        printf("%s\n",str);
    }
    fclose(fp);
}
```
