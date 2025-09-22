### Finding the missing elements in an array

```c
#include <stdio.h>
int main() {
    int n, i, sum = 0, total;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[n - 1];
    printf("Enter %d numbers (from 1 to %d with one missing):\n", n - 1, n);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    total = n * (n + 1) / 2;
    printf("Missing Number = %d\n", total - sum);
    return 0;
}
```
