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

	printf("두수의 합: %d\n", sum);
	printf("두수의 차: %d\n", diff);
	printf("두수의 곱: %d\n", mul);
	printf("두수의 몫: %d\n", div);

	return 0; //여기서는 return 0을 지워도 실행됨.
	//실행되는 이유: 여기서는 m

}