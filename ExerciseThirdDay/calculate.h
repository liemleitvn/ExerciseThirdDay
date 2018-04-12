/*Nhap vao so nguyen, thuc hien cac ham sau:
1. So dao nguoc
2. Kiem tra so doi xung (tra ve true/false)
3. Kiem tra co phai so chinh phuong khong
4.Kiem tra co phai so nguyen to khong
Tinh tong so le */

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
bool palindrome(int n)//Kiem tra so doi xung
{
	int sodao = reverseNumber(n);
	if (n == sodao)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int checkQuadratic(int n)//kiem tra n co phai la so chinh phuong
{
	int temp;
	for (i = 1; 1 <= n; i++)
	{
		if (i*i == n)
		{
			temp = n;
			break;
		}
	}
	return temp;
}
int checkPrimeNumber(int number)//kiem tra co phai so nguyen to khong
{
	int m = number / 2;
	for (int i = 2; i <= m; i++)
	{
		if (number % i == 0)
		{
			return 0;
			break;
		}
	return number;
}
//Ham tinh tong so le
int oddNumber(int n)
{
	int Sum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
			Sum = Sum + i;
	}
	return (Sum);
}
int sumPrime(int n)
{
	int S = 3;
	for (int i = 2; i <= n; i++)
	{
		S = S + checkNumber(i);
	}
	
	return S;
}
int tongSoNguyen(int n)
{
	int A = 0;
	for (i = 1; i <= n; i++)
	{
		A = A + i;
	}
	return A;
}
int tongSoNguyenBinhPhuong(int n)
{
	int B = 0;
	for (i = 1; i <= n; i ++)
	{
		B = B + i*i;
	}
	return B;
}
//ham nay no chi in ra int k int float duoc
float tongNghichDaoSoNguyen(int n)
{
	float T = 0;
	for (i = 1; i <= n; i++)
	{
		T = float(T) + float(1 / i);
	}
	return  float(T);
}
int tichSoNguyen(int n)
{
	int C = 1;
	for (i = 1; i <= n; i++)
	{
		C = C*i;
	}

	return C;
}
int tongGiaiThuaSoNguyen(int n)
{
	int D = 0;
	int C;
	for (i = 1; i <= n; i++)///i chay 1 roi len 3 k chay gia tri bang 2
	{
		C = tichSoNguyen(i);
		D = D + C;
	}
	return D;
}

void calculateInterger()
{
	printf("\nPlease input Number: ");
	scanf_s("%d", &n);
	printf("\n So dao: %d", reverseNumber(n));
	bool result = palindrome(n);
	if (result)
	{
		printf("\nSo %d la so doi xung",n);
	}
	else
	{
		printf("\nSo %d khong phai so doi xung",n);
	}
	int temp = checkQuadratic(n);
	if (temp=n)
	{
		printf("\nSo %d la chinh phuong", n);
	}
	else
	{
		printf("\nSo %d khong phai so chinh phuong ", n);
	}
	int prime = checkPrimeNumber(n);
	if (prime == 0)
	{
		printf("\nSo %d khong phai so nguyen to", n);
	}
	else
		printf("\nSo %d la so nguyen to ", n);
	printf("\nTong so le trong day tu 0 den %d la: %d",n, oddNumber(n));
	printf("\nTong cac so nguyen to trong day tu 0 den %d là: %d", n, sumPrime(n));
	printf("\nTong %d so nguyen: %d",n, tongSoNguyen(n));
	printf("\n Tong binh phuong %d so nguyen: %d",n, tongSoNguyenBinhPhuong(n));
	printf("\nTong nghich dao %d so nguyen: %0.2f",n, tongNghichDaoSoNguyen(n));
	printf("\n Tich %d so nguyen:  %d",n, tichSoNguyen(n));
	printf("\n Tong giai thua %d so nguyen: %d",n, tongGiaiThuaSoNguyen(n));
}
