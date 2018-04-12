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
			a[i][j] = rand() % 90+9;
		}
		//printf("\n");
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
	printf("Two Dimensional Array just input: \n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d   ", a[i][j]);
		}
		printf("\n");
	}
}
//Ham tinh tong so le
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
//Ham tinh tong so chan
int sumEvenNumber(int a[][10],int m, int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] % 2 == 0)
			{
				sum = sum + a[i][j];
			}
		}
	}
	return sum;
}

//Tinh tong duong cheo chinh
int sumMainDiagonal(int a[][10], int m, int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	return sum;
}
int sumAuxiliaryDiagonal(int a[][10], int m, int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (m-1 == i + j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	return sum;
}
int sumRows(int a[][10], int n,int i )
{
	int sum = 0;
	for (int j = 0; j < n; j++)
	{
		sum = sum + a[i][j];
	}
	return sum;
}
void outputSumRows(int a[][10], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\nSum Row %d:  %d", i + 1, sumRows(a,n,i));
	}
	printf("\n");
}
int sumColums(int a[][10], int m, int j)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		sum = sum + a[i][j];
	}
	return sum;
}
void outputSumColums(int a [][10], int m)
{
	for (int j = 0; j < m; j++)
	{
		printf("\nSum Colum %d: %d", j + 1,sumColums(a,m,j));
	}
}
void twoDimensionalArray()//Mang 2 chieu
{
	int a[10][10];
	int m, n;
	printf("Please input information array\n");
	printf("Intput rows: ");
	scanf_s("%d", &m);
	printf("Intput colums: ");
	scanf_s("%d", &n);
	printf("\n");
	inputTwoDimensionalArrayRandom(a, m, n);
	//inputTwoDimensionalArray(a, m, n);
	outputTwoDimensionalArray(a, m, n);
	printf("\nSum Odd Number Array: %d", sumOddNumberArray(a, m, n));
	printf("\nSum Even Number Array: %d", sumEvenNumber(a, m, n));
	if (m == n)
	{
		printf("\nSum Main Diagonal Array: %d", sumMainDiagonal(a, m, n));
		printf("\nSum auxiliary Diagonal Array: %d", sumAuxiliaryDiagonal(a, m, n));
	}
	printf("\n");
	outputSumRows(a,n);
	outputSumColums(a, m);
}