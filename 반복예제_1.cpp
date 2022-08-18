#include <stdio.h>

main()
{
	int n=0;
	
	while(n<10)
	{
		printf("#");
		n++;
	 } 
	//--------------
	printf("\n");
	int num = 1;
	while(num<= 5)
	{
		printf("반복내용 : %d\n", num );
		num++;
	}
	printf("반복문종료후 num : %d\n", num );
	
	//----------------------
	int i=30;
	while( i >= 10 )
	{
		printf("%d ", i);
		i=i-2; // i-=2
	}
	//-----------------------
	printf("\n");
	
	i = 1;
	int sum = 0;
	while( i <= 10)
	{
		sum = sum + i;
		i++;
	}
	printf("1부터 10까지의 합 : %d", sum);
}
