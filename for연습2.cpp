#include <stdio.h>
main()
{
	printf("\n[예제6]=============\n");
	
	int i, count = 0, sum=0;
	for(i=3; i<=50; i+=3){
		printf("%4d", i );
		sum = sum+i;
		++count;
		if(count%5==0)
			printf("\n");
	} 
	printf("\nsum=%d", sum);
	
	printf("\n[예제7]=============\n");
	char ch;
	for( ch='F'; ch >= 'A'; ch-- )
	{
		printf("%c ", ch);
		
	}
}
