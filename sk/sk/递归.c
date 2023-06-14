//#define _SCL_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////递归只是一种思路 通过不断调用本身这个函数拆分问题 要有停止的条件 不然函数会溢出
//void print(int n) {
//	//12 3 12怎么来n/10 3怎么来 123%10 下面同理
//	//1 2 
//	//1   这个就是停止 条件当 数是一位数就不要进行递归了
//	if (n > 9) {
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//
//
//}
//int main() {
//	int n = 123;
//	print(n);
//
//
//}