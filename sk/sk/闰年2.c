﻿#define _SCL_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a;
	printf("输入一个年份");
	scanf_s("%d", &a);
	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0) {
		printf("%d是闰年",a);
	}
	else {
		printf("%d不是闰年", a);


	}



}