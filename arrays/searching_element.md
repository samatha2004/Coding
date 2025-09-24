### Searching an element wether it is present in an array or not
```c
#include <stdio.h>
int main() {
    int n, i, key, found = 0;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
        if (arr[i] == key) { found = 1; break; }

    if (found) printf("%d found at position %d\n", key, i + 1);
    else printf("Not found\n");
    return 0;
}
```
