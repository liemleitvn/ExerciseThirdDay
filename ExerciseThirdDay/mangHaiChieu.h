/*Tinh tong cac so le trong ma tran so nguyen*/

#include <stdio.h>
#include<conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//Ham nhap random
void inputTwoDimensionalArrayRandom(int a[][10], int m, int n)//Nhap mang 2 chieu random
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
void outputTwoDimensionalArray(int a[][10], int m, int n)//Xuat mang 2 chieu vua nhap
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
int sumOddNumberArray(int a[][10], int m, int n)//Tong so le cua mang
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
int sumEvenNumber(int a[][10],int m, int n)//Tong so chan
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
int sumMainDiagonal(int a[][10], int m, int n) //Tong duong cheo chinh
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
int sumAuxiliaryDiagonal(int a[][10], int m, int n)//Tong duong cheo phu
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
int sumRows(int a[][10], int n,int i )//Tong hang
{
	int sum = 0;
	for (int j = 0; j < n; j++)
	{
		sum = sum + a[i][j];
	}
	return sum;
}
void outputSumRows(int a[][10], int n)//Xuat tong hang
{
	for (int i = 0; i < n; i++)
	{
		printf("\nSum Row %d:  %d", i + 1, sumRows(a,n,i));
	}
	printf("\n");
}
int sumColums(int a[][10], int m, int j) //Tong cot
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		sum = sum + a[i][j];
	}
	return sum;
}
void outputSumColums(int a[][10], int m) //Xuat tong cot
{
	for (int j = 0; j < m; j++)
	{
		printf("\nSum Colum %d: %d", j + 1, sumColums(a, m, j));
	}
}
void convertArrayDimensionalOne(int a[][10], int m, int n, int b[])//Chuyen thanh mang 1 chieu
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			b[i*n + j]=a[i][j];
	}
	
}
void outputArrayConvertDimensionalOne(int a[][10], int m, int n)//Xuat mang 1 chieu
{
	int p = m*n;
	int b[100];
	printf("\n\nArray convert dimensional one: ");
	convertArrayDimensionalOne(a, m, n, b);
	for (int i = 0; i < p; i++)
		printf(" %d ", b[i]);
}
void sortArrayDimensionalOne(int a[][10], int m, int n)//sap xep mang mot chieu
{
	int b[100];
	int p = m*n;
	convertArrayDimensionalOne(a, m, n, b);
	for (int i = 0; i < p - 1; i++)
	{
		for (int j = i + 1; j < p; j++)
		{
			if (b[i]>b[j])
			{
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
}
void sortArrayDimensionalOneFolowRowColum(int a[][10], int m, int n,int b[]) //Sap xep mang ttu trai qua phai tu tren xuong duoi
{
	int p = m*n;
	convertArrayDimensionalOne(a, m, n, b);
	for (int i = 0; i < p - 1; i++)
	{
		for (int j = i + 1; j < p; j++)
		{
			if (b[i]>b[j])
			{
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
		}
	}
}
void outputsortArrayDimensionalOneFolowRowColum(int a[][10], int m, int n)//xuat mang sap xep theo hang va cot
{
	int b[100];
	sortArrayDimensionalOneFolowRowColum(a, m, n,b);
	printf("\n\nArray sort folow row and colum \n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = b[i*n + j];
			printf("%d   ", a[i][j]);
		}
		printf("\n");
	}
}
void sortZicZac(int a[][10], int m, int n)//sap xep ziczac
{
	int b[100];
	int p;
	p = n*n;
	convertArrayDimensionalOne(a, m, n, b);
	sortArrayDimensionalOne(a, m, n);
	int vt = 0;
	int i, j;
	for (i = 0; i < m; i++)
	{
		if (i % 2 == 0)
		for (j = 0; j < n; j++)
		{
			a[i][j] = b[vt];
			vt++;
		}
		else
		for (j = n - 1; j >= 0; j--)
		{
			a[i][j] = b[vt];
			vt++;
		}
	}
}
void outputsortArrayDimensionalOneZicac(int a[][10], int m, int n)//xuat sap xep mang kieu ziczac
{
	printf("\nArray sort ziczac: \n");
	sortZicZac(a, m, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d   ", a[i][j]);
		}
		printf("\n");
	}
}



void SapXepXoanOc(int a[][10], int m, int n)
{
	int B[100];
	int p = m*n;
	convertArrayDimensionalOne(a, m, n, B);
	sortArrayDimensionalOne(a, m, n);
	int tren = 0, duoi = m - 1, trai = 0, phai = n - 1;
	int i, vt = 0;
	do
	{
		for (i = trai; i <= phai && vt < p; i++)
			a[tren][i] = B[vt++];
		tren++;
		for (i = tren; i <= duoi && vt < p; i++)
			a[i][phai] = B[vt++];
		phai--;
		for (i = phai; i >= trai && vt < p; i--)
			a[duoi][i] = B[vt++];
		duoi--;
		for (i = duoi; i >= tren && vt < p; i--)
			a[i][trai] = B[vt++];
		trai++;
	} while (tren <= duoi && trai <= phai);
	
	printf("\n\n\n\n\n");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%d   ", a[i][j]);
		}
		printf("\n");
	}

}


void twoDimensionalArray()//Mang 2 chieu
{
	int a[10][10];
	int m, n;
	printf("\nPlease input information array\n");
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
	outputArrayConvertDimensionalOne(a, m, n);
	outputsortArrayDimensionalOneFolowRowColum(a, m, n);
	outputsortArrayDimensionalOneZicac(a, m, n);
	SapXepXoanOc(a, m, n);
}
