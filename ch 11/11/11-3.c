#include <stdio.h>

int main(void)
{
	char c[] = " c c++ java";
	printf("%s\n", c);
	c[5] = '\0'; // NULL ���ڿ� ���� ���ڿ� �и�
	printf("%s\n%s\n", c, (c + 6));

	// ���ڹ迭�� �� ���Ҹ� �ϳ� �ϳ� ����ϴ� ���
	c[5] = ' ';
	char* p = c;
	while (*p)
		printf("%c", *p++);
	printf("\n");

	return 0;

}