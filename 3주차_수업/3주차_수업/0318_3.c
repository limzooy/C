#include <stdio.h>

int main(void)
{
	short x, y;
	short sum, diff, mul, div;

	x = 20.2;
	y = 10.8;

	sum = x + y;
	diff = x - y;
	mul = x * y;
	div = x / y;

	printf("�μ��� ��: %d\n", sum);
	printf("�μ��� ��: %d\n", diff);
	printf("�μ��� ��: %d\n", mul);
	printf("�μ��� ��: %d\n", div);

	return 0; //���⼭�� return 0�� ������ �����.
	//����Ǵ� ����: ���⼭�� m

}