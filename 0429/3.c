#include <stdio.h>

int max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}

int main(void)
{
	int x, y, big;
	printf("정수 2개를 입력하시오: ");
	scanf_s("%d %d", &x, &y);

	big = max(x, y);
	printf("더 큰 값은 20입니다.");
	return 0;
}