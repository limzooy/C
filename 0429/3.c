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
	printf("���� 2���� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &x, &y);

	big = max(x, y);
	printf("�� ū ���� 20�Դϴ�.");
	return 0;
}