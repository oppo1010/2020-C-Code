#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "JAVA 2017 go c#";
	printf("%d\n", strlen("java")); // java의 길이는 4
	printf("%s, ", _strlwr(str)); // all 소문자 변환
	printf("%s\n", _strupr(str)); // all 대문자 변환

	printf("%s, ", strstr(str, "VA"));

	printf("%s\n", strchr(str, 'A'));

	return 0;
}