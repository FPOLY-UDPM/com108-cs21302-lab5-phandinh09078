/******************************************************************************
 * Họ và tên: [phan nhu dinh]
 * MSSV:      [Ps49566]
 * Lớp:       [COM108_CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>

//Tạo hàm hoán vị sử dụng con trỏ

void hoanVi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int a, b;
    printf("Nhập hai số nguyên a và b: ");
    scanf("%d %d", &a, &b);

    printf("Trước khi hoán vị: a = %d, b = %d\n", a, b);

    hoanVi(&a, &b);

    printf("Sau khi hoán vị: a = %d, b = %d\n", a, b);

    return 0;
}

