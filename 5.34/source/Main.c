#include <stdio.h>

int power(int base, int exponent) {
	if (exponent == 1) {
		return base;
	}
	else {
		return base * power(base, exponent - 1);
	}
}

int main() 
{
	int a, b;
	printf("�п�J��ӼƦr:");
	scanf("%d", &a);
	scanf("%d", &b);
	int result = power(a, b);
	printf("%d\n", result);
	return 0;
}
