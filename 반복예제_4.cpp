#include <stdio.h>
main()
{
	printf("예제10---------\n");
	
	int i =10;
	do{
		printf("%d", i);
		i--;
	} while( i >=5 );
	
	printf("\n예제11---------\n");
	
	i = 0;
	int n;
	printf("정수입력 : ");
	scanf("%d", &n);
	do
	{
		printf("I love programming\n");
		i++ ;
	 } while(i<n);
	
	printf("\n예제14---------\n");
	int sum = 0;
	do{
		printf("숫자입력: ");
		scanf("%d", &n);
		sum = sum + n;
	} while(n != 0);
	printf("합 : %d", sum);
	 
	 
}
