#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int *p;
	
	p = (int *)malloc(sizeof(int));
	printf("p = %p\n",p);	
	
	printf("value of p (garbage since not initialized yet) = %d\n",*p);	
	
	*p = 10;
	printf("value of p = %d\n",*p);
	
	int *p2;
	p2 = (int *)calloc(100,sizeof(int));
	
	printf("value of p2 = %d\n", *p2);
	
	int *p3 = (int *)malloc(sizeof(int)*10);
	printf("p3 after malloc = %p\n",p3);
	p3 = (int *)realloc(p3,sizeof(int)*12);
	printf("p3 after realloc = %p\n",p3);
	
	
	char *pc;
	pc = (char *)malloc(20*sizeof(char));

	p3 = (int *)realloc(p3,sizeof(int)*600);
	printf("p3 after bigger realloc = %p\n",p3);
	
	free(p);
	free(p2);
	free(p3);
	free(pc);
	
	return 0;
}
