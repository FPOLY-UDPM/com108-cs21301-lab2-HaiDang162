/******************************************************************************
 * Họ và tên: [Lã Hải Đăng]
 * MSSV:      [PS47692]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>
float pi = 3.14;
int main(){
    float R;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &R);
    printf("Chi vi hinh tron la: %.2f\n", 2 * R * pi);
    printf("Dien tich hinh tron la: %.2f\n", R * R * pi);
    return 0;
}