#include <stdio.h>

int main(void)
{
	char c[] = " c c++ java";
	printf("%s\n", c);
	c[5] = '\0'; // NULL 문자에 의해 문자열 분리
	printf("%s\n%s\n", c, (c + 6));

	// 문자배열의 각 원소를 하나 하나 출력하는 방법
	c[5] = ' ';
	char* p = c;
	while (*p)
		printf("%c", *p++);
	printf("\n");

	return 0;

}