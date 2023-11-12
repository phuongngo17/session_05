#include <stdio.h>

int main() {
    int minutes, subscription;
    float phoneCalls;
    
    // Nhap so phut su dung tu nguoi dung
    printf("Nhap so phut su dung: ");
    scanf("%d", &minutes);
    
    // Tinh cuoc dien thoai dua tren so phut su dung
    if (minutes <= 50) {
       phoneCalls = minutes * 600;
    } else if (minutes <= 200) {
        phoneCalls = 50 * 600 + (minutes - 50) * 400;
    } else if (minutes <= 400) {
        phoneCalls = 50 * 600 + 150 * 400 + (minutes - 200) * 200;
    } else {
        phoneCalls = 50 * 600 + 150 * 400 + 200 * 200 + (minutes - 400) * 100;
    }
    
    // Tinh tong cuuoc dien thoai va phi thue bao hang thang
    phoneCalls += 25000;
    
    // In ra tong cuoc dien thoai
    printf("Tong cuoc dien thoai: %.2f VND\n", phoneCalls);
    
}

