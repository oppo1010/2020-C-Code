#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "JAVA 2017 go c#";
	printf("%d\n", strlen("java")); // java�� ���̴� 4
	printf("%s, ", _strlwr(str)); // all �ҹ��� ��ȯ
	printf("%s\n", _strupr(str)); // all �빮�� ��ȯ

	printf("%s, ", strstr(str, "VA"));

	printf("%s\n", strchr(str, 'A'));

	return 0;
}