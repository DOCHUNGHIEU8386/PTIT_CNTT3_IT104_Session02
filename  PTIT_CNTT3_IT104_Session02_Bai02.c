#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *array;
    int number, count = 0;

    do {
        printf("Nhap so luong phan tu n (0 < n <= 100): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    array = (int*) malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d: ", i);
        scanf("%d", &array[i]);
    }

    printf("Nhap so can dem: ");
    scanf("%d", &number);

    for (int i = 0; i < n; i++) {
        if (array[i] == number) {
            count++;
        }
    }

    printf("So %d xuat hien %d lan trong mang.\n", number, count);

    free(array);

    return 0;
}
