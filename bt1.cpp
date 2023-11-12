#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, consider1, consider2;

    // Nhap cac he so a, b va c tu nguoi dung
    printf("Nhap he so a: ");
    scanf("%f", &a);
    printf("Nhap he so b: ");
    scanf("%f", &b);
    printf("Nhap he so c: ");
    scanf("%f", &c);

    // Tinh delta
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        // Hai nghiem phan biet
       consider1 = (-b + sqrt(delta)) / (2 * a);
        consider2 = (-b - sqrt(delta)) / (2 * a);

        printf("Phuong trinh co hai nghiem phan biet:\n");
        printf("Nghiem 1 = %.2f\n", consider1);
        printf("Nghiem 2 = %.2f\n", consider2);
    } else if (delta == 0) {
        consider1 = -b / (2 * a);

        printf("Phuong trinh co mot nghiem kep:\n");
        printf("Nghiem = %.2f\n", consider1);
    } else {
        printf("Phuong trinh vo nghiem\n");
    }

}

