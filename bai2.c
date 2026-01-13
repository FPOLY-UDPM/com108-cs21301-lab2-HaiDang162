/******************************************************************************
 * Họ và tên: [Lã Hải Đăng]
 * MSSV:      [PS47692]
 * Lớp:       [CS21301]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main(){
    float dai, rong;
    printf("Nhap chieu dai : ");
    scanf("%f", &dai);
    printf("Nhap chieu rong : ");
    scanf("%f", &rong);
    printf("Chu vi HCN la: %.2f\n", (dai + rong) * 2);
    printf("Dien tich HCN la: %.2f\n", dai * rong); 
    return 0;

}