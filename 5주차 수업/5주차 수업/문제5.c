#include <stdio.h>

int main(void)
{
	int money, change;
	int price, c5000, c1000, c500, c100 = 0;

	printf("물건 값을 입력하시오: ");
	scanf_s("%d", &price);

	printf("투입한 금액을 입력하시오: ");
	scanf_s("%d", &money);
	change = money - price;

	c1000 = change / 1000;
	change = change % 1000
		;

	c500 = change / 500;
	change = change % 500;

	printf("\n천원권: %d장\n", c1000);
	printf("\n500원동전: %d개\n", c500);
	printf("\n100원동전: %d개\n", c100);

	return 0;

}