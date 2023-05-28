#define _SCL_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(){
//	printf("请做出选择");
//	int a = 0;
//	//输入内容
//	scanf_s("%d", &a);
//	if (a == 1)
//	{
//		printf("好好学习\n");
//	}
//	else
//	{
//		printf("开摆·");
//
//	}
//}
//	




////定义一个函数add 加法 和python 差不多 
//int ADD(int a,int b) //c中任何对象都要一开始就要定义类型  int a ,b 就是两个形参
//{
//	int z = a + b;
//	return z;           //返回值就是一个函数做完某个事情之后到底要返回一个什么样的东西出去 这个值可以是任意
//
//}
//int main() {
//	int a = 100;
//	int b = 100;
//	int sum = ADD(a, b);  //a b 就是两个实参
//	printf("%d", sum);
//
//
//}
//定义数组 数组类似于python里的列表 它也有下标 下标从0开始 
//定义方式 类型 变量名[开辟大小]={值1，值2.。。。。}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//直接读数组和列表读取方式一样都是用下标来读 arr[下标]
//	int i = 0;
//		while (i<10)
//		{
//			printf("%d\n", arr[i]);
//			i++;   //切记循环内三要素都不能缺 初始值 循环条件 变化条件
//		}
//
//}
//

//int hanshu(){
//	static int a = 1;//在c语言中 如果没有加static静态变量 那变量的生效时间就是 进入变量作用域-出变量作用域 出去之后就会把内存
//	//消失存储 就会销毁 但是加了static不会销毁
//	a++;
//	printf("%d\n", a);
//
//	}
//int main() {
//	int x = 0;
//	while (x < 5) {
//		hanshu();
//		extern sk;
//		printf("%d\n", sk);
//		x++;
//	}
//	return 0;
//
//
////}
//extern add(int, int);
//int main() {
//	int a = 100;
//	int b = 200;
//	int sk = add(a, b);
//	printf("sum=%d", sk);
//	return 0;
//}
////printf(main);
//#define MAX 100 //定义表示常量的方法 
//int Max(int a, int b){
//	if (a > b) {
//		return a;
//	}
//	else {
//		return b;
//	}
//}
////#define max(a,b) (a>b? a:b)
//int main() {
//	int a = 10;   
//	int b = 30; 
//	int* s = &a;   //指针 顾名思义 导航 类型*变量名=&（取地址符） 把某个变量的地址存放到另一个变量中 那么这个变量所指向的地址也是它所得到的的那个地址
//	//可以直接通过*存放地址的变量 直接修改值  和python一样 有地址类型和值 
//	int m = Max(a, b);
//	int ma = max(a, b);
//	*s = 123;
//	printf("%d\n%d", m,ma);
//	printf("%p\n", s);
//	printf("%d\n", sizeof(s));
//	printf("%d\n", a);
//}    
//创建结构体 类似于 python内的类
//struct ren   //struct 构造 ren 构造的名字
//{
//	char name[20];  //定义特征 
//	short age;
//
//};
//int main() {
//	struct ren ren1 = { "shangkang",20 };//定义属性
//	ren1.age = 123;//属性的值 可以直接通过 实例名.属性名修改
//	printf("我是:%s\n", ren1.name);//%s char 
//	printf("我%d了\n", ren1.age);
//	struct ren* sk = &ren1;
//	printf("%d\n", (*sk).age);
//	(*sk).age = 1321654165165;
//	printf("%d\n", (*sk).age);
//	printf("%d\n", sk->age  );
//	return 0;
//}
/*
* int main() {
	int age = 18;
	if (age < 18) {//if else {这里面是代码块} ；为一句
		printf("weichengnian\n");
	}
	else {
		printf("yijchnegj");
	}



}
*/
int main() {
	int age;
	printf("请输入两个整数 =");
	scanf_s("%d",&age);
	if (age < 18) {
		printf("未成年\n");
	}
	//else if ()相当于python里的elif
	else if (age >= 18 && age <= 28) {
		printf("青年\n");
	}
		
	else if (age > 28 && age < 50)
	{
		printf("壮年\n");
	}
	else {
		printf("laonain");
	}

}