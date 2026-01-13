/******************************************************************************
* Họ và tên: [Lã Hải Đăng]
 * MSSV:      [PS47692]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa 
// Output: Hiển thị ra màn hình điểm trung bình  
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>

int main(){
    float Toan, Ly, Hoa;
    printf("Nhap diem toan : ");
    scanf("%f", &Toan);
     printf("Nhap diem Ly : ");
    scanf("%f", &Ly);
     printf("Nhap diem Hoa : ");
    scanf("%f", &Hoa);
    printf("Diem trung binh la : %.2f\n", (Toan * 3 + Ly * 2 + Hoa) / 6);

    return 0;
}