#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x, y;
	int sum, diff, mul, div;

	printf("첫번째 숫자를 입력하시오: ");
	scanf_s("%d", &x);

	printf("두번째 숫자를 입력하시오: ");
	scanf_s("%d", &y);

	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;

	printf("두수의 합: %d\n", sum);
	printf("두수의 차: %d\n", diff);
	printf("두수의 곱: %d\n", mul);
	printf("두수의 몫: %d\n", div);

	return 0;
}