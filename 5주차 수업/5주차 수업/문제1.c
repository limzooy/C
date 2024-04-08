#include <stdio.h>
int main(void)
{
	int radius;
	int area;

	printf("원의 면적을 입력하시오: ");
	scanf_s("%d", &radius);

	area = 3.141592 * radius * radius;
	printf("원의 면적: %d \n", area);

	return 0;
}