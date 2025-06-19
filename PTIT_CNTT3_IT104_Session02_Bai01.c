//B1 khởi tạo giá trị số luọng phần từ người dùng nhập (Check 0 < n <= 100)
//B2 cấp phát bộ nhớ động (array)
// int*array = (int*)malloc(n*sizeof(int));
// Nhâp các gía trị trong mảng array
//Duyêtj qua mảng
// khởi tạo biến maxnumber = array[0] (lưu kết qủa lớn nhất )
//in ra màn hình maxnumber

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    // B1: Nhập số lượng phần tử và kiểm tra điều kiện
    printf("Nhap so luong phan tu (0 < n <= 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("So luong phan tu khong hop le.\n");
        return 1; // Kết thúc chương trình nếu n không hợp lệ
    }

    // B2: Cấp phát bộ nhớ động cho mảng
    int *array = (int *)malloc(n * sizeof(int));
    if (array == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }

    // Nhập các giá trị trong mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    // Tìm phần tử lớn nhất
    int maxNumber = array[0]; // Khởi tạo max với phần tử đầu tiên
    for (int i = 1; i < n; i++) {
        if (array[i] > maxNumber) {
            maxNumber = array[i];
        }
    }

    printf("Phan tu lon nhat trong mang la: %d\n", maxNumber);

    free(array);

    return 0;
}
