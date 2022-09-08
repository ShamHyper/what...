#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <iostream>

int main(void)
{
	system("chcp 1251");
	int x, b1000, a;
	printf("Введите число 1:");
	scanf(R"(%d)", &x);
	if (x == 1)
	{
		printf("Слава России\n");
	}
	else
	{
		printf("Ты еблан?\n");
	}
	_getch();
	return 0;
}