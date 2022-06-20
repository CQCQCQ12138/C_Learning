#define _CRT_SECURE_NO_WARNING
#include<stdio.h>
int main() {
	int a = 0;
	while (a<=100)
	{
		if (1==a%2) {
			printf("%d\n", a);
		}
		a++;
	}
	return 0;
}