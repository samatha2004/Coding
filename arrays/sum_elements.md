### Sum of all elements in an array

```c
#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);
    return 0;
}
```
