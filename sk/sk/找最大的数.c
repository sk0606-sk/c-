#define _SCL_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个整形的数组//
int main() {
	int arr[] = {1,3,6,4,8,9,6,2,1,10}; 
	//要比较的数
	int a = 7;
	//使用二分查找法 需要知道左右的下标 左下标0 有下边要进行计算siztof(arr)/sizof(arr[0])-1 减一因为有数组或者字符的结束标志\0
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	
	//要注意左边的下标一定是要小于右边的下标 所以这也是我们循环的条件 如果左边的小标大于右边的下标了 可以说明 整个数组找完没有这个数
		while (left<=right)
		{
			int mid = (left + right)/2;
			if (arr[mid] == a) {
				printf("找到了这个数了下标为  %d", mid);
				break;
			}
			else if (arr[mid] > a) {
				//如果这个中间值大于要找的这个数 那么我们要缩小左右下标的范围 可以知道的是 我这个中间值得左边没有我要的这个数
				// 那么这个右下标应该是中间数-1
				right = mid - 1;
			}
			else if (arr[mid] < a) {
				left = mid + 1;
			}
			else {
				printf("找到了这个数了下标为%d", a);
				break;
			}
		}
		if (left > right) {
			printf("没有这个数");
		}

}
//这个方法的总的思想就是 缩小范围 拿中间值作为媒介 通过它来和需要找的值作比较 核心在于 怎样缩小范围 在中间值的左边那么可以将这个范围缩小为 左边范围（中间值加1）反之 层层缩小
//如果左右下标相等那么就可以得出结果了 如果这个数在这个数组就找到了 如果没在 就应当来个条件进行判断说明这个数不在这个数组