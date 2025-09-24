### converting the 2d array elements to 1d
```c
#include <stdio.h>
int main() {
    int r, c;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    int arr[r][c], oneD[r * c], k = 0;

    printf("Enter elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            oneD[k++] = arr[i][j];

    printf("1D Array: ");
    for (int i = 0; i < r * c; i++) printf("%d ", oneD[i]);
    return 0;
}
```
