#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *array;

      do {
        printf("Nhap so luong phan tu cua mang (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    array = (int*) malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Khong the cap phat bo nho. Chay lai thu nhe!\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("\nMang ban dau: [");
    for (int i = 0; i < n; i++) {
        printf("%d", array[i]);
        if (i != n - 1) printf(", ");
    }
    printf("]\n");

    for (int i = 0; i < n / 2; i++) {
        int temp = array[i];
        array[i] = array[n - 1 - i];
        array[n - 1 - i] = temp;
    }

    printf("Mang sau khi dao nguoc: [");
    for (int i = 0; i < n; i++) {
        printf("%d", array[i]);
        if (i != n - 1) printf(", ");
    }
    printf("]\n");

    free(array);

    return 0;
}
