#include <stdio.h>
#include <conio.h>
#include <math.h>


int n,i;
int S = 0;
void inPutInteterger(int n)
{
		
}
int reverseNumber(int number)//ham dao nguoc so nguyen
{
	int reverse;
	int sodao = 0;
	while (number > 0)
	{
		reverse = number % 10;
		sodao = sodao * 10 + reverse;
		number /= 10;
	}
	return sodao;
}
int tongSoNguyen(int n)
{
	for (i = 0; i < n; i++)
	{
		S = S + i;
	}
	return S;
}
int tongSoNguyenBinhPhuong(int n)
{
	for (i = 0; i < n; i ++)
	{
		S = S + i*i;
	}
	return S;
}
int tongNghichDaoSoNguyen(int n)
{
	float T = 0;
	for (i = 1; i < n; i++)
	{
		T = T + (1 / i);
	}
	return T;
}
int tichSoNguyen(int n)
{
	int T = 1;
	for (i = 1; i < n; i++)
	{
		T = T*i;
	}
	return T;
}
int tongGiaiThuaSoNguyen(int n)
{
	int T = 1;
	for (i = 1; i < n; i++)
	{
		T = tichSoNguyen(i);
		S = S + T;
	}
	return S;
}

void calculateInterger()
{
	printf("\nPlease input Number: ");
	scanf_s("%d", &n);
	//int Tong1 = tongSoNguyenBinhPhuong(n);
	printf(" \Tong n so nguyen: %d", tongSoNguyenBinhPhuong(n));
	printf("\n So dao cua so vua nhap la: %d", reverseNumber(n));
	printf("\n Tong binh phuong n so nguyen: %d", tongSoNguyenBinhPhuong(n));
	printf("\nTong nghich dao n so nguyen: %d", tongNghichDaoSoNguyen(n));
	printf("\n Tich n so nguyen:  %d", tichSoNguyen(n));
	printf("\n Tong giai thua n so nguyen: %d", tongGiaiThuaSoNguyen(n));
}