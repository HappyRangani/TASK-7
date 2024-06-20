#include<stdio.h>
/*
A
B A
C B A
D C B A
E D C B A
*/
main()
{
	char r, c;

	for(r='A';r<='E';r++)
	{
		for(c=r;c>='A';c--)
		{
			printf("%c ",c);
		}
		printf("\n");
	}

}