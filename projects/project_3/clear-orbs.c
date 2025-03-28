#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int j, i, t, l;
	int pos = 0;
	char color;
	int ret = EOF + 1;

	size_t maxn = 10;	
	int nread = 0;
			
	char *ostr_ptr = (char *) malloc(sizeof(char)*maxn);
	char *mstr_ptr = (char *) malloc(sizeof(char)*maxn);
	char *fstr_ptr = (char *) malloc(sizeof(char)*maxn);		
	int *count_ptr = (int *) malloc(sizeof(int)*maxn); 
	
	while (ret != EOF) {

		nread = getline(&ostr_ptr, &maxn, stdin); //Dr. Ferguson and Dr. Carrier clarified the behavior of getline and scanf (thanks!!!)
		ret = scanf("%d %c\n", &pos, &color);	
		
		if (ret == EOF) {
			break;
		}
		
		mstr_ptr = (char *) realloc(mstr_ptr, sizeof(char)*nread);
		for (j=0,i=0;j<nread;j++) {
			if (j == pos) {
				mstr_ptr[j] = color;
			}
			else {
				mstr_ptr[j] = ostr_ptr[i];
				i++;
			}
		}	
		
		int count = 1; //Dr. Carrier helped me understand high level how to solve with stack (thanks!!!)
		fstr_ptr = (char *) realloc(fstr_ptr, sizeof(char)*nread);
		count_ptr = (int *) realloc(count_ptr, sizeof(int)*nread);
 		for (t=0,l=0;t<nread;l++,t++) {
			count_ptr[t] = count;
			fstr_ptr[l] = mstr_ptr[t];
			
			
 			if (t != nread-1 && mstr_ptr[t] == mstr_ptr[t+1]) {
				count++;
			}
			else {
				if (count >= 3) { //Dr. Carrier helped me debug this portion of my code (thanks!!!)
					l = l - count;	
					if (l < 0) {
						count = 0;
					}
					else {	
						count = count_ptr[l] + 1;
					}
			
				}
				else {
					count = 1;
				}
			}
		}
		
		printf("%d\n", l);
			
	}
		
	free(ostr_ptr);
	free(mstr_ptr);
	free(fstr_ptr);
	free(count_ptr);

	return 0;
}
