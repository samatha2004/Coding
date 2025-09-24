### Printing the ascii values using arrays in c
``` c
#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("ASCII Values:\n");
    for (int i = 0; str[i] != '\0'; i++)
        printf("%c = %d\n", str[i], str[i]);
    return 0;
}
```
