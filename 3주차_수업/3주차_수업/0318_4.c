#include <stdio.h>

int main(void)
{
	int i;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &i); //scanf로 사용해도 상관은 없는데, 보안적인 위험요소가 있기 때문에 scanf_s를 사용하는게 무조건 좋음.
	return 0;
	
}