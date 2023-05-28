
#include<stdio.h>
//循环100
int main() {
	//定义循环变量的初始值,定义一个和
	int num = 1;
	int sum = 0;
	//循环条件 
	while (num <= 100) {
		if (num % 2 != 0) {
			sum += num;
		}
		num++;
	}
	printf("和为%d\n", sum);
	return 0;
}