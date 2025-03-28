#include <stdio.h>

int main(void) {
	int x = 5;
	long l = 123452;
	long long ll = 14354353456742342342;
	float f = 837.89;
	double num = 839143.459285901;
	char c = 'h';
	char s[] = "hello";
	
	printf("my int = %05d\n", x); //0 filled right justify -> left justify add a '-'
	printf("%20.3f %e %g\n", num, num, num);
	
	printf("my msg = %s\n",s);
	return 0;
}
