### Printing all unique elements in an array

```c
#include <stdio.h>
int main() {
    int n, isUnique;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Unique elements: ");
    for (int i = 0; i < n; i++) {
        isUnique = 1;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) printf("%d ", arr[i]);
    }
    return 0;
}
```
