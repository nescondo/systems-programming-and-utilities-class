#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int s_arr[12];
	int s_cum[12];
	
	int *arr_ptr = (int *) malloc(sizeof(int)*12);
	int *cum_ptr = (int *) malloc(sizeof(int)*12);
	
	printf("numbers in s_arr: ");
	for (int i=0;i<12;i++) { //pointer arithmetic notation
		*(s_arr+i) = i;
		printf("%d ", *(s_arr+i));
	}
	
	printf("\n");
		
	printf("numbers in s_cum: "); //array indexing notation
	for (int j=0;j<12;j++) {
		if (j==0) {
			s_cum[j] = s_arr[j];
		}	
		else {
			s_cum[j] = s_arr[j] + s_cum[j-1];
		}
	}
	
	for (int k=0;k<12;k++) {
		printf("%d ", *(s_cum+k));
	}
	
	printf("\n");
	
	printf("numbers in arr_ptr: ");
	for (int x=0;x<12;x++) {
		*(arr_ptr+x) = x;
		printf("%d ", *(arr_ptr+x));
	}
	
	printf("\n");

	printf("numbers in cum_ptr: ");
	for (int y=0;y<12;y++) {
		if (y==0) {
			*(cum_ptr+y) = *(arr_ptr+y);	
		}
		else {
			*(cum_ptr+y) = *(arr_ptr+y) + *(s_cum + (y-1)); //note how this is written in pointer arithmetic notation
		}
	}
	
	for (int z=0;z<12;z++) {
		printf("%d ", *(cum_ptr+z));
	}
	
	printf("\n");
	
	return 0;
}
