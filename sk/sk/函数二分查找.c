//#define _SCL_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
////一个数字 一个要查找的数
//int chazhao(int k, int arr[], int sz) {
//	int left = 0;
//	int right = sz - 1;
//	//进入循环 要使能查到与元素 左下标必须小于右下标 关键在于 中间下标  但是影响中间下标的还是左右下标 实质是改变左右下标 如果所
//	//中间值在要值得左边 那么左下标应该为mid+1 相反 中间值在要找值得右边 右下标为mid-1 从而缩小一半
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == k) {
//			printf("找到了下标为 %d",mid);
//			return mid;
//		}
//		else if (arr[mid] > k) {
//			right=mid-1;
//
//		}
//		else if (arr[mid] < k) {
//			left=mid+1;
//
//		}
//		
//
//	}
//	return -1;
//
//}
//int main() {
//	int k = 7;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int sk=chazhao(k,arr,sz);
//}