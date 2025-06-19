
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Nhap so luong phan tu (0 < n <= 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So luong phan tu khong hop le.\n");
        return 1;
    }

    int *array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Nhap array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    int maxNumber = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > maxNumber) {
            maxNumber = array[i];
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", maxNumber);

    free(array);

    return 0;
}
