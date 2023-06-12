#define _SCL_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_prime(int n) {
	int a;
	int b = 1;
	for (a = 2; a < n; a++) {
		if (n %a == 0) {
			int b = 0;
			break;
		}
		if (b==1)
		{
			return 1;
		}

	}



}



int main() {
	//打印100-200之间的素数
	int i = 0;
	for (i = 100; i <= 200; i++) {
		//判断i是否为素数
		if (is_prime(i) == 1) {
			printf("%d\n", i);
		}


	}
	return 0;

}