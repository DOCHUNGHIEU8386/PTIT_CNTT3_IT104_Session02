#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, target;
    int *array;
    int found = 0;

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

    printf("Nhap tong can tim: ");
    scanf("%d", &target);

    for (int i = 0; i < n - 1 && !found; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] + array[j] == target) {
                printf("Cap phan tu tim thay: %d, %d\n", array[i], array[j]);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("Khong tim thay\n");
    }

    free(array);
    return 0;
}
