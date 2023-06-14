#define _SCL_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int hslen(char * arr) {
//	//定义计数的函数
//	int count = 0;
//	while (*arr != '\0') {
//		count++;
//		arr++;
//
//	}
//	return count;
//
//}
// 这个递归的基线条件就是 数组的结束标志是\0 只要不是\0就会继续递归下去 不能创建临时变量作计数那就直接进行加法运算
//hslen(“sk”)
//1+hslen("k")
//1+1+hslen("")
//1+1+0;  其实真正的运行逻辑是 只要没有遇见\0 就一直打开函数 
int hslen(char* arr) {
	//一位一位的判断 有两种情况 第一个地址的字符不等于\0 进行递归 如果第一位就是等于\0 那么直接return
	if (*arr != '\0') {
		return 1 + hslen(arr + 1);//可不可以这样理解*arr只是arr变量的第一位地址 而arr是整个数组空间 它有它组成元素的
		//所有地址 +1 就是到下位地址
	}
	else {
		return 0;
	}

}

int main() {
	//定义数组 
	char arr[] = "sksk";
	int len = hslen(arr);
	printf("%d", len);

}