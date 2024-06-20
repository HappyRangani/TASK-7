#include <stdio.h>
/*
5 4 3 2 1
  4 3 2 1
    3 2 1
      2 1
        1
        
*/
main()
{
	int r,c,s;
	
	for(r=5;r>=1;r--)
	{
		for(s=5;s>r;s--)
		{
			printf("  ");
		}
		for(c=r;c>=1;c--)
	    {
	    	printf("%d ",c);
	    }
	    printf("\n");
	}
}