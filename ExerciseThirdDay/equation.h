#include <stdio.h>
#include <conio.h>
#include <math.h>

int a, b, c;
int delta;
float xx, xy;
void inputCoefficient(int a, int b, int c)//nhap he so 
{
	printf("\nInput: ");
	scanf_s("%d", a);
	printf("\nInput: ");
	scanf_s("%d", b);
	printf("\nInput: ");
	scanf_s("%d", c);
}
int calculateDelta(int a, int b, int c)//tinh delta
{
	inputCoefficient(a, b, c);
	delta = b*b - 4 * a*c;
	return delta;
}
void calculateColution(int a, int b, int c)//tinh nghiem
{
	delta = calculateDelta(a, b, c);
	if (delta < 0)
	{
		printf("\nQuadratic no colution");
	}
	if (delta == 0)
	{
		xx = float(-b / (2 * a));
		printf("\nQuadratic has one colution x = : %f", xx);
	}
	if (delta>0)
	{
		xx = float((-b - sqrt(delta)) / (2 * a));
		xy = float((-b + sqrt(delta)) / (2 * a));
		printf("\nQuadratic has two colution: x1 = %0.2f, x2 = %0.2f", xx, xy);
	}
}
void quadraticEquationTwo()
{
	printf("Program calculate colution of quadratic 2\nPlease input conficient.");
	inputCoefficient(a,b,c);
	calculateColution(a, b, c);
}
