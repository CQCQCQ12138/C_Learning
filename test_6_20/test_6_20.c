#include<stdio.h>
#include "add.h"
//int main() {//�ж�һ�����Ƿ�Ϊ�����ĵ�һ�ַ���
//	int num;							
//	printf("Please enter a number ");
//	scanf("%d",&num);
//	if (num % 2 == 0) 
//		printf("The number is a ou muth");
//	
//	else 
//		printf("The number is a ji muth");
//	return 0;
//}

//int numb(int a) {
//	if (0 == a % 2)
//		printf("2");
//	else
//		printf("1");
//}
//int main() { //�ж�һ�����Ƿ�Ϊż���ĵڶ��ַ���
//	int num;
//	printf("������һ����");
//	scanf_s("%d",&num);
//	numb(num);
//return 0;
// }

//int main() {//���1-100�ڵ�����
//	for (int i = 1; i <100; i++)
//	{ 
//		if (0==i%2)
//		{
//			printf("%d",i);
//		}
//	}
// return 0;
//}

int main() {//�����Զ��庯��
	int x = 10;
	int y = 20;
	int sum = add(x, y);
		printf("%d",sum);
		return 0;
}