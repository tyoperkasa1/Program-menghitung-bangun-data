#include <stdio.h>
int main() {
int a,b,r;
float luas,keliling;
printf("menu:\n");
printf("1. Menghitung luas dan keliling persegi panjang\n");
printf("2. Menghitung luas dan keliling lingkaran\n");
printf("3. Menghitung luas dan keliling segitiga\n");
printf("Pilihan anda : \n");
int pilihan;
scanf("%d", &pilihan);

switch(pilihan){
	case 1 :
		printf("Masukkan panjang:\n");
		scanf("%d", &a);
		printf("Masukkan lebar:\n");
		scanf("%d", &b);
		luas=a*b;
		keliling=2*a+2*b;
		printf("\n Keliling Persegi panjang : %.0f", keliling);
		printf("\n Luas Persegi panjang : %.0f", luas); break;
	case 2 :
		printf("Masukkan panjang jari-jari:\n");
		scanf("%d", &r);
		keliling=22/7*2*r;
		luas=22/7*r*r;
		printf("\n keliling lingkaran: %.1f",keliling);	printf("\n luas lingkaran:%.1f",luas); break;
	case 3 :
		printf("masukkan a:\n");
		scanf("%d", &a);
		printf("Masukkan b:\n");
		scanf("%d", &b);
		printf("Masukkan r:\n");
		scanf("%d", &r);
		keliling=a+b+r;
		luas=a*b*1/2;
		printf("keliling segitiga:%.1f",keliling);
		printf("\nluas segitiga:%.1f",luas); break;
	default: printf("data tidak ditemukan, program dihentikan\n");
}
return 0;
}
