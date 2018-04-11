#include "stdafx.h"
// #include "demso.h" //kiem tra so nguyen
#include "permutation.h"
#include "demso2.h"
//#include "change_char.h"
//#include "equation.h"
void main()
{
	//changeChar();
	//permutationNumber();
	// testnumber();
	//quadraticEquationTwo();
	int a[100];
	int count = 0;
	int zeroTotal = 0;
	sayNumber(a, 10001, count, zeroTotal);

	for (int i = count - 1; i >= zeroTotal; i--) {
		if (i == 0) {
			printf("%d", a[i]);
		}
		if (i == 1) {
			if (a[i] == 1) {
				printf("muoi ", a[i]);
			}
			else {
				printf("%d muoi ", a[i]);
			}
		}
		if (i == 2) {
			printf("%d tram ", a[i]);
		}
		if (i == 3) {
			printf("%d nghin ", a[i]);
		}
		if (i == 4) {
			if (a[i - 1] == 10 || a[i - 1] == 0) {
				printf("muoi nghin ", a[i - 1]);
			}
			else {
				printf("muoi %d nghin ", a[i - 1]);
			}
			i--;
		}
	}

	_getch();
}