#include <stdio.h>//stdio.h라는 헤더 파일에 선언되어 있는 내용 출력

int main(void)//정수를 반환하는 main함수를 의미, 실행 시 0 반환
{
	printf("7+8=%d\n", 7 + 8);//%d로 계산 결과를 정수형으로 출력
	printf("7-8=%d\n", 7 - 8);//출력 내용
	printf("7*8=%d\n", 7 * 8);//출력 내용
	printf("7/8=%d\n", 7 / 8);//출력 내용

	return 0;//0으로 반환

}