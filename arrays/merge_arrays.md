### Merging 2 arrays and sorting them in the descending order
``` c
#include <stdio.h>
int main() {
    int n;
    printf("Enter size of arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], merged[2*n];
    for (int i = 0; i < n; i++) scanf("%d", &arr1[i]);
    for (int i = 0; i < n; i++) scanf("%d", &arr2[i]);

    for (int i = 0; i < n; i++) merged[i] = arr1[i];
    for (int i = 0; i < n; i++) merged[n+i] = arr2[i];

    for (int i = 0; i < 2*n-1; i++) {
        for (int j = i+1; j < 2*n; j++) {
            if (merged[i] < merged[j]) {
                int temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }

    printf("Merged array in descending order: ");
    for (int i = 0; i < 2*n; i++) printf("%d ", merged[i]);
    return 0;
}
```
