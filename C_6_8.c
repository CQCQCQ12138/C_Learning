#include<stdio.h>
struct book
{
	char book[20];
	short precie;
};
	int main() {
		struct book b1 = {"C���Գ������",35};	
		printf("������%s\n", b1.book);
		return 0;
	}

