### Copying one file to other file
```c
#include<stdio.h>
int main()
{
    char str[100];
    FILE *source_file,*target_file;
    source_file=fopen("source_file.txt","r");
    if(source_file==NULL)
    {
        printf("there is an error occured");
        return -1;
    }
    target_file=fopen("target_file.txt","w");
    if(target_file==NULL)
    {
        printf("the file is empty");
        fclose(target_file);
    }
    while(fgets(str,sizeof(str),source_file))
    {
        fputs(str,target_file);
    }
}
```
