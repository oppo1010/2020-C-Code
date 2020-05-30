#include <stdio.h>

typedef unsigned int budget;

int main(void)
{
	// 새로운 자료형 budget 사용
	budget year = 24500000;

	typedef int profit;
	// 새로운 자료형 profit 사용
	profit month = 4500000;

	printf("올 예산은 %d, 이달의 이익은 %d 입니다\n", year, month);

	return 0;
}

void test(void)
{
	budget year = 24500000;
}