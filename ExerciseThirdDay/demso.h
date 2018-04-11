/*/*Nhap vao so nguyen
Dem so co bao nhieu chu so
Xem so nguyen do co phai so nguyen to khong
Dao nguoc so nguyen
Doc so nguyen do*/

#include <stdio.h>
#include <conio.h>
#include <math.h>


/*void inputNumber(int number)
{
	while (number<0 && number>999999999)
	{
		printf("\nPlease input number (0<=number<=999.999.999): ");
		scanf_s("%d", &number);
		if (number<0 && number>999999999)
		{
			printf("\nData input invailid");
		}
		number >= 0 && number <= 9999999999;
	}
}*/
void docChuso(int chuso)
{
	if (chuso == 0)
		printf("Khong");
	if (chuso == 1)
		printf("Mot");
	if (chuso == 2)
		printf("Hai");
	if (chuso == 3)
		printf("Ba");
	if (chuso == 4)
		printf("Bon");
	if (chuso == 5)
		printf("Nam");
	if (chuso == 6)
		printf("Sau");
	if (chuso == 7)
		printf("Bay");
	if (chuso == 8)
		printf("Tam");
	if (chuso == 9)
		printf("Chin");
}
int countNumber(int number) //Dem so nguyen co bao nhieu chu so
{
	int count;
	count = 0;
	do
	{
		number /= 10;
		count++;
	} 
	while (number>0);
	printf("So luong so nhap: %d\n", count);
	return count;
}
void checkNumber (int number)//kiem tra co phai so nguyen to khong
{
	int m = number / 2;
	for (int i = 2; i <= m; i++)
	{
		if (number % i == 0)
		{
			printf("\nNumber %d not prime number\n", number);
			return;
		}
	}
	printf("\nNumber %d is prime number\n", number);

}

void reverseNumber(int number, int *sodao)//ham dao nguoc so nguyen
{
	int temp;
	int reverse;
	int i = 0;
	while (number > 0)
	{
		temp = number % 10;
		printf("%d\n", temp);
		//reverse = reverse * 10 + temp;
		sodao[i] = temp;
		number /= 10;
		i++;
	}
}
void readNumber(int number)
//Ham nay doc khong duoc so co 4 so 0 phia sau
{
	int sodao[100];
	reverseNumber(number, sodao);
	int count = countNumber(number);
	for (int i = count-1; i >= 0; i--){
		//6789
		docChuso(sodao[i]);
		if (count == 9)
			printf(" Tram ");
		if (count == 8)
			printf(" Muoi ");
		if (count == 7)
			printf(" Trieu ");
		if (count == 6)
			printf(" Tram ");
		if (count == 5)
			printf(" Muoi ");
		if (count == 4)
			printf(" Ngan ");
		if (count == 3)
			printf(" Tram ");
		if (count == 2)
			printf(" Muoi ");
		count--;
	}
	//int soluongsodao = countNumber(sodao);
	/*int soluong = countNumber(number);
	printf("So dao - so luong so da nhap  %d - %d:\n", sodao, soluong);
	while (sodao>0)
	{
		docChuso(sodao % 10);
		if (soluong == 9)
			printf(" Tram ");
		if (soluong == 8)
			printf(" Muoi ");
		if (soluong == 7)
			printf(" Trieu ");
		if (soluong == 6)
			printf(" Tram ");
		if (soluong == 5)
			printf(" Muoi ");
		if (soluong == 4)
			printf(" Ngan ");
		if (soluong == 3)
			printf(" Tram ");
		if (soluong == 2)
			printf(" Muoi ");
		soluong--;
		sodao /= 10;
	}*/
}

void testnumber()
{
	int number,sodaonguoc;
	printf("\nPlease input number (0<=number<=1.000.000.000): ");
	scanf_s("%d", &number);
	//inputNumber(number);
	checkNumber(number);
	//sodaonguoc = reverseNumber(number);
	readNumber(number);
	//printf("\nReverse Number: %d\n", sodaonguoc);
}
