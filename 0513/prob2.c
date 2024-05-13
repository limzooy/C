#include <stdio.h>
#define STUDENTS 10

int main(void)
{
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

    //사용자에게 입력 받기 위한 for문
	for (i = 0; i < STUDENTS; i++)
	{
		printf("학생들의 성적을 입력하시오: ");
		scanf_s("%d", &scores[i]);
	}
	//계산을 하기 위한 for문
	for (i = 0; i < STUDENTS; i++)
		sum += scores[i];

	average = sum / STUDENTS;
	printf("성적 평균 = %d\n", average);

	return 0;
}