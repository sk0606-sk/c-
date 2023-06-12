//#define _SCL_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////int get_max(int a, int b) {
////	return(a > b) ? (a) : (b); 
////
////
////}
////int main() {
////	int a = 10;
////	int b = 20;
////	int max=get_max(a, b);
////	printf("%d", max);
////	return 0;
////
////
////}
//void thuan(int* a, int* b) {
//	int tmp = 0;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//
//
//}//int *a=&b 指针   *a 解地址
//int main() {
//	int a = 10;
//	int b = 20;
//	//因为 如果不把变量的地址作为参数传入的话 不能达到替换的效果 因为函数自己会自己生成自己的空间
//	printf("a=%d,b=%d\n", a, b);
//	thuan(&a, &b);
//	printf("a=%d,b=%d", a, b);
//
//}