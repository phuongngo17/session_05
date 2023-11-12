#include <stdio.h>

int main() {
    float turnover, rose;
    
    // Nhap doanh thu tu nguoi dung
    printf("Nhap tung doanh thu: ");
    scanf("%f", &turnover);
    
    // Tinh hoa hong dua tren muc doanh thu
    if (turnover <= 100000000) {
        rose = turnover * 0.05;
    } else if (turnover <= 300000000) {
        rose = turnover * 0.1;
    } else {
        rose = turnover * 0.2;
    }
    
    // In ra hoa hong cua dai ly
    printf("Hoa hong cua dai ly: %.2f\n", rose);
}

