#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int x, y;
	int sum, diff, mul, div;

	printf("ù��° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &x);

	printf("�ι�° ���ڸ� �Է��Ͻÿ�: ");
	scanf_s("%d", &y);

	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;

	printf("�μ��� ��: %d\n", sum);
	printf("�μ��� ��: %d\n", diff);
	printf("�μ��� ��: %d\n", mul);
	printf("�μ��� ��: %d\n", div);

	return 0;
}