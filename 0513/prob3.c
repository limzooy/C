#include <stdio.h>
#define SIZE 5

// �ʱ�ȭ���� �ʾ��� ��, �ǹ̾��� ���� ���ִ� ���� ���� �ڵ�
int main(void)
{
	int i;
	int scores[SIZE];

	for (i = 0; i < SIZE; i++)
		printf("scores[%d] = %d\n", i, scores[i]);

	return 0;
}