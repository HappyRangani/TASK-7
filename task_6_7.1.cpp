#include <stdio.h>
/*
1 0 1 0 1
1 0 1 0
1 0 1
1 0
1
*/
main()
{
	int r,c;
	
	for(r=5;r>=1;r--)
	{
		for(c=1;c<=r;c++)
		{
			if(c%2==1)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}