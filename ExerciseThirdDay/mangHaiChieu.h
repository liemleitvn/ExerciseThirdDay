/*Tinh tong cac so le trong ma tran so nguyen*/

#include <stdio.h>
#include<conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//Ham nhap random
void inputTwoDimensionalArrayRandom(int a[][10], int m, int n)
{
	time_t t;
	//srand((unsigned)time(&t));
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{	
			a[i][j]= rand() % 50;
		}
		printf("\n");
	}
}

///Ham nhao thu cong
//void inputTwoDimensionalArray(int a[][10], int m, int n)
//{
//	
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		                                                                                                         {
//			printf("\nInput a[%d][%d]: ",i,j);
//			scanf_s("%d", &a[i][j]);
//		}
//			
//	}
//}
void outputTwoDimensionalArray(int a[][10], int m, int n)
{
	printf("TwoDimensionalArray just input: \n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d   ", a[i][j]);
		}
		printf("\n");
	}
}
int sumOddNumberArray(int a[][10], int m, int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 1)
			{
				sum = sum + a[i][j];
			}
		}
	}
	return sum;
}

void twoDimensionalArry()
{
	int a[10][10];
	int m, n;
	printf("Please input information array\n");
	printf("Intput rows: ");
	scanf_s("%d", &m);
	printf("Intput colums: ");
	scanf_s("%d", &n);
	inputTwoDimensionalArrayRandom(a, m, n);
	//inputTwoDimensionalArray(a, m, n);
	outputTwoDimensionalArray(a, m, n);
	printf("\nSum Odd Number Array: %d", sumOddNumberArray(a, m, n));
}