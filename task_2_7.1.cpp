#include<stdio.h>
/*
5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
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