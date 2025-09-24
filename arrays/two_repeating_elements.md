### Finding the two repeating elements in a given array.

```c
#include <stdio.h>
int main() {
    int n, i, j;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Repeating elements: ");
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
    return 0;
}
```
