#include <stdio.h>

int main() {
    int chiSoCu, chiSoMoi;
    float soDien, giaDien;

    printf("Nhap vao chi so cu va chi so moi: ");
    scanf("%d %d", &chiSoCu, &chiSoMoi);

    soDien = chiSoMoi - chiSoCu;

    if (soDien < 0) {
        printf("Nhap sai chi so, vui long kiem tra lai!");
    } else {
        if (soDien < 50) {
            giaDien = soDien * 10000;
        } else if (soDien < 100) {
            giaDien = 50 * 10000 + (soDien - 50) * 15000;
        } else if (soDien < 150) {
            giaDien = 50 * 10000 + 50 * 15000 + (soDien - 100) * 20000;
        } else if (soDien < 200) {
            giaDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDien - 150) * 25000;
        } else {
            giaDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDien - 200) * 30000;
        }

        printf("Tien dien tieu thu trong thang cua ho gia dinh la: %.2f VND", giaDien);
    }

    return 0;
}

