#include <stdio.h>

int main() {
   float a, b, c;
   printf("Nhap vao 3 canh cua tam giac: ");
   scanf("%f %f %f", &a, &b, &c);
   if (a+b > c && a+c > b && b+c > a) { // kiem tra dieu kien tam giac
      if (a == b && b == c) {
         printf("Day la tam giac deu.\n");
      }
      else if (a == b || a == c || b == c) {
         if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
            printf("Day la tam giac vuong can.\n");
         }
         else {
            printf("Day la tam giac can.\n");
         }
      }
      else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
         printf("Day la tam giac vuong.\n");
      }
      else {
         printf("Day la tam giac thuong.\n");
      }
   }
   else {
      printf("Day khong phai la tam giac.\n");
   }
   return 0;
}
