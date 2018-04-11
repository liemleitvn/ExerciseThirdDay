#include <stdio.h>
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
	} while (number>0);
	return count;
}
void checkNumber(int number)//kiem tra co phai so nguyen to khong
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
int reverseNumber(int number)//ham dao nguoc so nguyen
{
	int temp;
	int reverse;
	reverse = 0;//dat bien so dao nguoc
	while (number > 0)
	{
		temp = number % 10;
		reverse = reverse * 10 + temp;
		number /= 10;
	}
	return reverse;
}
void readNumber(int number)
{
	int soluong = countNumber(number);
	printf("So dao - so luong so dao  %d - %d:\n", number, soluong);
	while (number>0)
	{
		docChuso(number % 10);
		if (soluong == 9)
			printf(" Tram ");
		if (soluong == 8)
			printf(" Muoi ");
		if (soluong == 7)
			printf("Trieu");
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
		number /= 10;
	}
}

int main()
{
	int number, sodaonguoc;
	printf("\nPlease input number (0<=number<=1.000.000.000)");
	scanf("%d", &number);
	printf("%d", number);
	//inputNumber(number);
	checkNumber(number);
	readNumber(number);
	sodaonguoc = reverseNumber(number);

	printf("\nReverse Number: %d\n", sodaonguoc);

	return 0;
}