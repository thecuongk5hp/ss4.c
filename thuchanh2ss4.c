#include <stdio.h>
int main(){
	//1. nhap diem html, css, javascrip;
	float markhtml, markcss, markjavascrip; 
	printf("nhap vao diem html, css, javascrip cua sinh vien: ");
	scanf("%f%f%f" ,&markhtml,&markcss,&markjavascrip);
	//2. tinh diem trung binh cua sinh vien
	float avgMark = ( markhtml + markcss + markjavascrip ) / 3;
	//3. In ra xep loai sinh vien
    if (avgMark < 5){
    printf("Xep loai sinh vien: Yeu");
  }else if (avgMark < 7){
    printf("Xep loai sinh vien: Trung binh");
  }else if (avgMark < 8){
    printf("Xep loai sinh vien: Kha");
  }else if (avgMark < 9){
    printf("Xep loai sinh vien: Gioi");
  }else{
    printf("Xep loai sinh vien: Xuat sac");
  }
} 

