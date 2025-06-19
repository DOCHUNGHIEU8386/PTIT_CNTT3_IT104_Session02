//B1 Khởi tao giá trị số lượng phần tử n(0<n<=100)
//khởi taọ countNumber ;
//khởi tạo count(đếm số lần xuất hiện)
//B2 Cấp phát động int*array(dùng malloc)
//B3 Duyêt qua array
//Đếm số lầm xuất hiện
//Nếu tồn tại thì count++;
//B4 : In ra count ;
//B5: Giải phóng cấp phát động ;
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
