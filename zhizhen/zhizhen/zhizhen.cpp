// zhizhen.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	printf("*a=%d *b=%d\n", *a, *b);
}
int main()
{
	int x = 100, y = 200;
	swap(&x, &y);
	printf("x=%d y=%d\n", x, y);
	printf("&x=%d &y=%d\n", &x, &y);
	return 0;
}
