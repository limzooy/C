#include <stdio.h>

int main(void)
{
	print_stars();
	printf("\nHello World!\n");
	print_stars();
	printf("\n");
	return 0;
}

void print_stars()
{
	for (int i = 0; i < 20; i++)
		printf("*");

}
