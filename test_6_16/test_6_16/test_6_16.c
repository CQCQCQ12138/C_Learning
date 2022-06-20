#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a = 10;
	int b = 0;
	int c = 0;

	c = a++;
	printf("%d %d",c,a);
	return 0;
}