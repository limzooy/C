#include <stdio.h>
#define STUDENTS 10

int main(void)
{
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

    //����ڿ��� �Է� �ޱ� ���� for��
	for (i = 0; i < STUDENTS; i++)
	{
		printf("�л����� ������ �Է��Ͻÿ�: ");
		scanf_s("%d", &scores[i]);
	}
	//����� �ϱ� ���� for��
	for (i = 0; i < STUDENTS; i++)
		sum += scores[i];

	average = sum / STUDENTS;
	printf("���� ��� = %d\n", average);

	return 0;
}