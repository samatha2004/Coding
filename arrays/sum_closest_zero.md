### Two elements sum whose sum is closest to zero
``` c
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int minSum = __INT_MAX__, a = 0, b = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            if (abs(sum) < abs(minSum)) {
                minSum = sum;
                a = arr[i];
                b = arr[j];
            }
        }
    }
    printf("Pair: %d and %d (Sum = %d)\n", a, b, minSum);
    return 0;
}
```
