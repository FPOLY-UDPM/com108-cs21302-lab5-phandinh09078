/******************************************************************************
 * Họ và tên: [Phan Nhu Dinh]
 * MSSV:      [Ps49566]
 * Lớp:       [COM108_CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
// #include <stdio.h>

int main() {
    int a, b, c;
    int max;

    printf("Nhập ba số nguyên: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("Giá trị lớn nhất là: %d\n", max);

    return 0;
}
