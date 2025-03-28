#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char mystring[10]={'h','e','l','l','o'};
	int shift = 1;
	
	printf("The string to be encoded is %s and the shift to use is %d\n", mystring,shift);
	
	for(int i=0;i<=4;i++) {
		mystring[i] += shift;
}
	printf("The string to be encoded is %s and the shift to use is %d\n", mystring,shift);
	
	
	for(int j=0;j<=4;j++) {
		mystring[j] -= shift;
	}	
	
	printf("The string decoded is %s\n", mystring);
	return 0;	
}
