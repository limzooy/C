#include <stdio.h>

int main(void)
{
	int money, change;
	int price, c5000, c1000, c500, c100 = 0;

	printf("���� ���� �Է��Ͻÿ�: ");
	scanf_s("%d", &price);

	printf("������ �ݾ��� �Է��Ͻÿ�: ");
	scanf_s("%d", &money);
	change = money - price;

	c1000 = change / 1000;
	change = change % 1000
		;

	c500 = change / 500;
	change = change % 500;

	printf("\nõ����: %d��\n", c1000);
	printf("\n500������: %d��\n", c500);
	printf("\n100������: %d��\n", c100);

	return 0;

}