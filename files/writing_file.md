### writing in a file
``` c
#include<stdio.h>
int main()
{
    FILE *fp=fopen("text.txt","w");
    if(fp==NULL)
    {
        printf("error");
    }
    else
    {
        int x=10;
        fprintf(fp,"my 1st code %d",x);
        fputs("this is fputs",fp);
        fputc('c',fp);
    }
    fclose(fp);

}
```
