#include <stdio.h>
#include<conio.h>


char a[200];
int i;
int n;
int inputChar(int n)
{
	// Input characters
	for (i = 0; i < n; i++)
	{
		printf("\nChar a[%d]: ", i+1);
		scanf_s("%c", &a[i]);
		a[i] = getchar();
	}

	return a[i];
}

void displayCharArray(int n, int a[]) 
	{
	// Display array
	printf("Chuoi vua nhap: ");
	for (int i = 0; i < n; i++)
	{
		printf("%c", a[i]);
	}
}

int change(int a[])
//lam sao de return ve mang moi thay doi
{
	for (i = 0; i < n; i++)
	{
		if (a[i]<'a'&& a[i]>'z')
		{
			a[i] = a[i] - 32;

		}
		a[i] = getchar();
	}
	return a[i];
	
}
void changeChar()
{
	printf("Input amount char: ");
	scanf_s("%d",&n);
	inputChar(n);
	displayCharArray(n, a[n]);//????
}
