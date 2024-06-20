#include<stdio.h>
/*
5
4 4
3 3 3
2 2 2 2
1 1 1 1 1
*/
main()
{
	int r, c;

	for(r=5;r>=1;r--)
	{
		for(c=r;c<=5;c++)
		{
			printf("%d ",r);
		}
		printf("\n");
	}

}