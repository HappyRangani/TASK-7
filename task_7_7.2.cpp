#include <stdio.h>
/*
1 2 3 4 5 5 4 3 2 1
1 2 3 4     4 3 2 1
1 2 3         3 2 1
1 2             2 1
1                 1   
*/
main()
{
	int r,c;
	
	for(r=5;r>=1;r--)
	{
		for(c=1;c<=r;c++)
		{
			printf("%d ",c);
		}
		printf("\n");
    } 
}
