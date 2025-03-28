#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[10];
	for (int i=0; i<10; i++) {
		arr[i] = i;
	}
	
	printf("arr+1 = %d\n",*(arr+1));
	
	arr[1] = 80;
	printf("new arr+1 = %d\n",arr[1]);
	
	printf("arr+2 = %d\n",*(arr+2));
	
	*(arr+2) = 999;	
	printf("new arr+2 = %d\n", arr[2]);
	
	int *p1 = (int *)malloc(sizeof(int)*7);
	int *p2 = (int *)malloc(sizeof(int)*7);
	
	*(p1+1) = 80;
	for (int i=0; i<7; i++) {
		p2[i] = i; //array access notation
		*(p1+i) = i; //pointer arithmetic notation
	}
	
	printf("*(p1+5) = %d\n", *(p1+5));	
	printf("*(p2+5) = %d\n", *(p2+5));
	

	return 0;
}
