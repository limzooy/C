#include <stdio.h>
int main(void)
{
	int radius;
	int area;

	printf("���� ������ �Է��Ͻÿ�: ");
	scanf_s("%d", &radius);

	area = 3.141592 * radius * radius;
	printf("���� ����: %d \n", area);

	return 0;
}