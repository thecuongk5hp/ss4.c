#include <stdio.h>

int main() {
  float luongCoBan, ngayCongThucTe, ngayCongBinhThuong, luong;

  ngayCongBinhThuong = 26;
  printf("Nhap luong co ban: ");
  scanf("%f", &luongCoBan);
  printf("Nhap ngay cong thuc te: ");
  scanf("%f", &ngayCongThucTe);

  if (ngayCongThucTe > ngayCongBinhThuong) {
    float ngayCongVuot = ngayCongThucTe - ngayCongBinhThuong;
    ngayCongThucTe = ngayCongBinhThuong + ngayCongVuot*1.5;
  }

  luong = luongCoBan * (ngayCongThucTe / ngayCongBinhThuong);
  printf("Luong nhan vien la: %.2f", luong);

  return 0;
}

