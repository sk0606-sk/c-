#define _SCL_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main() {
//	//switch 类似于linux shell里的 case的用法 用这个语句是
//	//是因为有多分枝 多种情况
//	int day = 0;
//	printf("输入1-7\n");
//	scanf_s("%d", &day);
//	switch (day)
//	{
//		case 1://case 后的表达式只能是整形 
//		{
//			printf("星期一\n");
//			break;
//		}
//		case 2:
//		{
//			printf("星期2\n");
//			break;
//		}
//		case 3:
//		{
//			printf("星期3\n");
//			break;
//		}
//		case 4:
//		{
//			printf("星期4\n");
//			break;
//		}
//		case 5:
//		{
//			printf("星期\n");
//			break;
//
//		}
//		case 6: //case决定入口
//		{
//			printf("星期6\n");
//			break; //break决定出口
//		}
//		case 7:
//		{
//			printf("星期7\n");
//			break;
//		}
//	}
//
//	return 0;
//
//}
//int main() {
//	int ch = 0;
//	while (ch = getchar() != EOF) {
//		putchar(ch);
//
//	}
//
//
//}
//int main() {
//	int i = 1;
//	while (i < 10) {
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d", i);
//			i++;
//
//
//	}
//	return 0;
//}
//int main() {
//	int a = 0;
//	for (a = 1; a <= 10; a++) {
//		printf("%d\n", a);
//
//
//
//	}
//
//
//
//}
//int main() {
//	int arr[5] = { 1,2,3,4,5 };
//	printf("%d", arr[0]);
//}
int main() {
	int b, c = 1;
	int d;
	int a = 0;
	for (d = 1; d <= 10; d++)
	{
		for (b = 1; b <= d; b++)
		{
			c *= b;
		}
		a += c;
	}
	printf("%d", a);



}