#include <stdio.h>

typedef unsigned int budget;

int main(void)
{
	// ���ο� �ڷ��� budget ���
	budget year = 24500000;

	typedef int profit;
	// ���ο� �ڷ��� profit ���
	profit month = 4500000;

	printf("�� ������ %d, �̴��� ������ %d �Դϴ�\n", year, month);

	return 0;
}

void test(void)
{
	budget year = 24500000;
}