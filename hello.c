#include<stdio.h>

int main(){
	int a;
	__asm__ (
			"li %0, 2\n\t"
			:"=r"(a)
			);
	printf("%d\n", a);

	return 0;
}
