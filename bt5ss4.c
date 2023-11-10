#include <stdio.h>

int main() {
    int day, month, year;
    int is_valid = 1; // assume the date is valid

    printf("Nhap vao ngay, thang, nam (day, month, year): ");
    scanf("%d %d %d", &day, &month, &year);

    // check year
    if (year <= 0) {
        is_valid = 0;
    }

    // check month
    if (month < 1 || month > 12) {
        is_valid = 0;
    }

    // check day based on month and year
    int max_day = 31;
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        max_day = 30;
    } else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            max_day = 29;
        } else {
            max_day = 28;
        }
    }
    if (day < 1 || day > max_day) {
        is_valid = 0;
    }

    // print result
    if (is_valid) {
        printf("Ngay %d thang %d nam %d hop le\n", day, month, year);
    } else {
        printf("Ngay %d thang %d nam %d khong hop le\n", day, month, year);
    }

    return 0;
}

