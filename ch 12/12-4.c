#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	register int sum = 0;

	int max;
	printf("양의 정수 입력 >> ");
	scanf("%d", &max);

	// 레지리스트 블록 지역변수 선언
	for (register int count = 1; count <= max; count++)
		sum += count;

	printf("합: %d\n", sum);

	return 0;
}