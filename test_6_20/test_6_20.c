#include<stdio.h>
#include "add.h"
//int main() {//判断一个数是否为奇数的第一种方法
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
//int main() { //判断一个数是否为偶数的第二种方法
//	int num;
//	printf("请输入一个数");
//	scanf_s("%d",&num);
//	numb(num);
//return 0;
// }

//int main() {//输出1-100内的奇数
//	for (int i = 1; i <100; i++)
//	{ 
//		if (0==i%2)
//		{
//			printf("%d",i);
//		}
//	}
// return 0;
//}

int main() {//测试自定义函数
	int x = 10;
	int y = 20;
	int sum = add(x, y);
		printf("%d",sum);
		return 0;
}