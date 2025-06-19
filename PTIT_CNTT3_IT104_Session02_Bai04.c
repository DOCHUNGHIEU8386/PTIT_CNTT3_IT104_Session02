#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *array;
    int position, newValue;

    do {
        printf("Nhap so luong phan tu (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    array = (int*) malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }

    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("Nhap vi tri muon sua (0 den %d): ", n - 1);
    scanf("%d", &position);

    if (position < 0 || position >= n) {
        printf("Vi tri khong hop le!\n");
        free(array);
        return 1;
    }

    printf("Nhap gia tri moi tai vi tri do: ");
    scanf("%d", &newValue);

    array[position] = newValue;

    printf("Mang sau khi cap nhat: [");
    for (int i = 0; i < n; i++) {
        printf("%d", array[i]);
        if (i != n - 1) printf(", ");
    }
    printf("]\n");

    free(array);

    return 0;
}
