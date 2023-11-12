#include <stdio.h>

int main() {
    int day, month;

    // Nhap ngay sinh va thang sinh
    printf("Nhap ngay sinh: ");
    scanf("%d", &day);

    printf("Nhap thang sinh: ");
    scanf("%d", &month);

    // In cung hoang dao
    switch (day) {
        case 1:
            if (day <= 19) {
                printf("Cung Ma Ket\n");
            } else {
                printf("Cung Bao Binh\n");
            }
            break;
        case 2:
            if (day <= 18) {
                printf("Cung Bao Binh\n");
            } else {
                printf("Cung Song Ngu\n");
            }
            break;
        case 3:
            if (day <= 20) {
                printf("Cung Song Ngu\n");
            } else {
                printf("Cung Bach Duong\n");
            }
            break;
           case 4:
            if (day <= 19) {
                printf("Cung Bach Duong\n");
            } else {
                printf("Cung Kim Nguu\n");
            }
            break;
        case 5:
            if (day <= 20) {
                printf("Cung Kim Nguu\n");
            } else {
                printf("Cung Song Tu\n");
            }
            break;
        case 6:
            if (day <= 21) {
                printf("Cung Song Tu\n");
            } else {
                printf("Cung Cu Giai\n");
            }
            break;
        case 7:
            if (day <= 22) {
                printf("Cung Cu Giai\n");
            } else {
                printf("Cung Su Tu\n");
            }
            break;
        case 8:
            if (day <= 22) {
                printf("Cung Su Tu\n");
            } else {
                printf("Cung Xu Nu\n");
            }
            break;
        case 9:
            if (day <= 22) {
                printf("Cung Xu Nu\n");
            } else {
                printf("Cung Thien Binh\n");
            }
            break;
        case 10:
            if (day <= 22) {
                printf("Cung Thien Binh\n");
            } else {
                printf("Cung Bo Cap\n");
            }
            break;
        case 11:
            if (day <= 21) {
                printf("Cung Bo Cap\n");
            } else {
                printf("Cung Nhan Ma\n");
            }
            break;
        case 12:
            if (day <= 21) {
                printf("Cung Nhan Ma\n");
            } else {
                printf("Cung Ma Ket\n");
            }
            break;
        default:
            printf("Thang sinh khong hop le!\n");
    }

}

