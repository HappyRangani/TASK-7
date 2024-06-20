#include<stdio.h>
/*
1 1 1 1 1
2 2 2 2
3 3 3
4 4
5
*/
main()
{
	int r, c;

	for(r=1;r<=5;r++)
	{
		for(c=r;c<=5;c++)
		{
			printf("%d ",r);
		}
		printf("\n");
	}

}