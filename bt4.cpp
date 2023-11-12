#include <stdio.h>

int main() {
    float grossIncome, deductions, income, incomeTax, netSalary;

    // Nhap tong thu nhap va tien giam tru
    printf("Nhap tong thu nhap: ");
    scanf("%f", &grossIncome);

    printf("Nhap tien giam tru: ");
    scanf("%f", &deductions);

    // Tinh thu nhap chiu thue
   income = grossIncome - deductions;

    // Tinh thue thu nhap
    if (income <= 5000000) {
        incomeTax = income * 0.05;
    } else if (income <= 10000000) {
        incomeTax = income * 0.1;
    } else if (income <= 18000000) {
        incomeTax = income * 0.15;
    } else if (income <= 32000000) {
       incomeTax = income * 0.2;
    } else if (income <= 52000000) {
        incomeTax = income * 0.25;
    } else if (income <= 80000000) {
       incomeTax = income * 0.3;
    } else {
        incomeTax = income * 0.35;
    }

    // Tinh luong rong
   netSalary = income - incomeTax;

    // In ket qua
    printf("Thu nhap chiu thue: %.2f\n", income);
    printf("Thue thu nhap: %.2f\n", incomeTax);
    printf("Luong rong: %.2f\n", netSalary);

}

