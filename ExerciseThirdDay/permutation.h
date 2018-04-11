#include <stdio.h>
#include<conio.h>
#include<math.h>

void hoanvi(int &x, int &y)
{
	x = x + y;
	y = x - y;
	x = x - y;
}
void permutationNumber()
{
	int a, b;
	printf("Please input number\n");
	printf("Number 1: ");
	scanf_s("%d", &a);
	printf("Number 2: ");
	scanf_s("%d", &b);
	printf("Hai so truoc khi hoan vi la:  %d   -   %d\n", a, b);
	hoanvi(a, b);
	printf("Hai so sau khi hoan vi la:    %d   -   %d", a, b);
}
