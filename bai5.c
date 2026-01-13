/******************************************************************************
* Họ và tên: [Lã Hải Đăng]
 * MSSV:      [PS47692]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI LÀM THÊM
// BÀI 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TÍCH VÀ THƯƠNG CỦA 2 SỐ

#include <stdio.h>

int main(){
    float so1, so2;

    printf("Chương trình tính tích và thương của 2 số\n");
    printf("Nhap so 1 : ");
    scanf("%f", &so1);
    printf("Nhap so 2 : ");
    scanf("%f", &so2);  
    printf("Tich cua 2 số là : %.2f\n",so1 * so2);
    printf("Thuong cua 2 số là : %.2f",so1 / so2);
    return 0;
} 