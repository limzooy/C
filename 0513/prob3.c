#include <stdio.h>
#define SIZE 5

// 초기화하지 않았을 때, 의미없는 값이 들어가있는 것을 보는 코드
int main(void)
{
	int i;
	int scores[SIZE];

	for (i = 0; i < SIZE; i++)
		printf("scores[%d] = %d\n", i, scores[i]);

	return 0;
}