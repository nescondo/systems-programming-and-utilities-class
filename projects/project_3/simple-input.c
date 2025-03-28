#include <stdio.h>
#include <stdlib.h>

int main()
{
	size_t maxn = 10;
	int ret = EOF + 1;
	char *p;
	int i;
	p = (char *)malloc(sizeof(char)*maxn);	
	while (ret != EOF)
	{
		int r_cnt=0;
		ret = getline(&p, &maxn, stdin);
		for(i=0;i<=ret;i++)
		{
			if (p[i]=='r')
			{
				r_cnt++;
			}
		}
		if (ret == EOF)
		{
			break;
		}
		else 
		{	
			printf("%d\n", r_cnt);
		}
	}
	free(p);
	return 0;
}
