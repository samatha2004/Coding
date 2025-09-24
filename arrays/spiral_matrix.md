### Printing a matrix in the spiral way
``` c
#include <stdio.h>
int main() {
    int r, c;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    int top = 0, bottom = r - 1, left = 0, right = c - 1;
    printf("Spiral order: ");
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) printf("%d ", arr[top][i]);
        top++;
        for (int i = top; i <= bottom; i++) printf("%d ", arr[i][right]);
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--) printf("%d ", arr[bottom][i]);
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) printf("%d ", arr[i][left]);
            left++;
        }
    }
    return 0;
}

```
