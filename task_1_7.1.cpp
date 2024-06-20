#include<stdio.h>
/*
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/
main()
{
	int r, c;

	for(r=1;r<=5;r++)
	{
		for(c=r;c>=1;c--)
		{
			printf("%d ",c);
		}
		printf("\n");
	}
}