#define _SCL_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(){
//	printf("������ѡ��");
//	int a = 0;
//	//��������
//	scanf_s("%d", &a);
//	if (a == 1)
//	{
//		printf("�ú�ѧϰ\n");
//	}
//	else
//	{
//		printf("���ڡ�");
//
//	}
//}
//	




////����һ������add �ӷ� ��python ��� 
//int ADD(int a,int b) //c���κζ���Ҫһ��ʼ��Ҫ��������  int a ,b ���������β�
//{
//	int z = a + b;
//	return z;           //����ֵ����һ����������ĳ������֮�󵽵�Ҫ����һ��ʲô���Ķ�����ȥ ���ֵ����������
//
//}
//int main() {
//	int a = 100;
//	int b = 100;
//	int sum = ADD(a, b);  //a b ��������ʵ��
//	printf("%d", sum);
//
//
//}
//�������� ����������python����б� ��Ҳ���±� �±��0��ʼ 
//���巽ʽ ���� ������[���ٴ�С]={ֵ1��ֵ2.��������}
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//ֱ�Ӷ�������б��ȡ��ʽһ���������±����� arr[�±�]
//	int i = 0;
//		while (i<10)
//		{
//			printf("%d\n", arr[i]);
//			i++;   //�м�ѭ������Ҫ�ض�����ȱ ��ʼֵ ѭ������ �仯����
//		}
//
//}
//

//int hanshu(){
//	static int a = 1;//��c������ ���û�м�static��̬���� �Ǳ�������Чʱ����� �������������-������������ ��ȥ֮��ͻ���ڴ�
//	//��ʧ�洢 �ͻ����� ���Ǽ���static��������
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
//#define MAX 100 //�����ʾ�����ķ��� 
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
//	int* s = &a;   //ָ�� ����˼�� ���� ����*������=&��ȡ��ַ���� ��ĳ�������ĵ�ַ��ŵ���һ�������� ��ô���������ָ��ĵ�ַҲ�������õ��ĵ��Ǹ���ַ
//	//����ֱ��ͨ��*��ŵ�ַ�ı��� ֱ���޸�ֵ  ��pythonһ�� �е�ַ���ͺ�ֵ 
//	int m = Max(a, b);
//	int ma = max(a, b);
//	*s = 123;
//	printf("%d\n%d", m,ma);
//	printf("%p\n", s);
//	printf("%d\n", sizeof(s));
//	printf("%d\n", a);
//}    
//�����ṹ�� ������ python�ڵ���
//struct ren   //struct ���� ren ���������
//{
//	char name[20];  //�������� 
//	short age;
//
//};
//int main() {
//	struct ren ren1 = { "shangkang",20 };//��������
//	ren1.age = 123;//���Ե�ֵ ����ֱ��ͨ�� ʵ����.�������޸�
//	printf("����:%s\n", ren1.name);//%s char 
//	printf("��%d��\n", ren1.age);
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
	if (age < 18) {//if else {�������Ǵ����} ��Ϊһ��
		printf("weichengnian\n");
	}
	else {
		printf("yijchnegj");
	}



}
*/
int main() {
	int age;
	printf("�������������� =");
	scanf_s("%d",&age);
	if (age < 18) {
		printf("δ����\n");
	}
	//else if ()�൱��python���elif
	else if (age >= 18 && age <= 28) {
		printf("����\n");
	}
		
	else if (age > 28 && age < 50)
	{
		printf("׳��\n");
	}
	else {
		printf("laonain");
	}

}