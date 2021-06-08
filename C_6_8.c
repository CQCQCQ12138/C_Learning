#include<stdio.h>
struct book
{
	char book[20];
	short precie;
};
	int main() {
		struct book b1 = {"C语言程序设计",35};	
		printf("名称是%s\n", b1.book);
		return 0;
	}

