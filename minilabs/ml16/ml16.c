#include <stdio.h>
#include <stdlib.h>

void swap(int *p1, int *p2); //prototype

int main(void) {
	int num1 = 5;
	int num2 = 10;
	
	int *p1 = &num1;
	int *p2 = &num2;
	
	printf("before swap: num1 = %d, num2 = %d\n", num1, num2);	
	swap(p1, p2);
	printf("after swap: num1 = %d, num2 = %d\n", num1, num2);
	
	return 0;
}
	
void swap(int *p1, int *p2) {
	int saved = *p1;
	*p1 = *p2;
	*p2 = saved;	
}
