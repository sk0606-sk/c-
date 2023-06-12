#define _SCL_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a = 12, b = 18;
	int remainder; // 余数
	while (b != 0) {
		//具体逻辑就是取余后小的数作为被除数 大的作为除数 所以要进行重新赋值 直到被除数为0时 除数就是最大公约数 这就是辗转相除法 
		//12%18....12  18%12...6 被除数做除数 余数做被除数
		remainder = a % b; // 求余数
		a = b; // 更新a，b的值
		b = remainder;
		printf("A是%d%是B%d=%d\n", a, b, a % b);

	}
	/*
a=12
b=18
yushu=a%b=12
a=18
b=yushu12
yushu=a%b=6
a=12
b=yushu6
yushu=a%b=0
a=6
b=0*/
	printf("12和18的最大公约数是：%d", a);

	return 0;
}