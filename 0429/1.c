#include <stdio.h>

void print_stars() //����� ���� �Լ�
{
	for (int i = 0; i < 20; i++)
		printf("*");

}

int main(void)
{
	print_stars();
	printf("\nHello World!\n");
	print_stars();
	printf("\n");
	return 0;
}