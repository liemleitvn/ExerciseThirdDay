#include <stdio.h>
#include <conio.h>
#include <math.h>

char *chu[10] = { "", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin" };

int zeroSum = 0;

// 11.000
int zero = 0;
void sayNumber(int *a, int n, int &count, int &zeroTotal) {
	int mod = n % 10;
	n = n / 10;

	a[count] = mod;
	count++;

	zeroSum += mod;

	if (zeroSum == 0) {
		zeroTotal++;
	}

	if (n > 0) {
		sayNumber(a, n, count, zeroTotal);
	}
}