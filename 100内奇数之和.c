
#include<stdio.h>
//ѭ��100
int main() {
	//����ѭ�������ĳ�ʼֵ,����һ����
	int num = 1;
	int sum = 0;
	//ѭ������ 
	while (num <= 100) {
		if (num % 2 != 0) {
			sum += num;
		}
		num++;
	}
	printf("��Ϊ%d\n", sum);
	return 0;
}