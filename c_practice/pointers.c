#include <stdio.h>

int main(void) {
	//int *iptr; //declaring an int pointer
	//char *cptr; //declaring a char pointer
	//float *fptr; //declaring a float pointer
	
	int a, b;
	int *iptr;
	int *jptr;
	
	a = 5;
	b = 6;
	
	iptr = &a; //set iptr to have the memory address of a
	jptr = &b; //set jptr to have the memory address of b
	
	*iptr = 10; //set value of the value of the  memory address in iptr to be 10

	printf("iptr memory address: %p\n", iptr);
	printf("iptr value of memory address: %d\n", *iptr);
	printf("jptr memory address: %p\n", jptr);
	printf("jptr value of memory address: %d\n", *jptr);

	
	return 0;
}
