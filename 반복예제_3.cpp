#include <stdio.h>
main()
{
	int i=1 , dan;
	printf("몇 단?");
	scanf("%d", &dan);
	
	printf("***2단***\n", dan); 
	
	while(i<=9){
	
		printf("2*%d=%d\n",i, i*dan  );
		i++;
	}
	
	while(i>=1){
	
		printf("2*%d=%d\n",i, i*dan  );
		i--;
	}
	
	printf("\n--------------------\n");
	int count = 1;
	while(1){
		printf("%d", count);
		count = count +2 ;
		if( count >10)
			break;
	}
	
	printf("\n1부터100까지의 홀수의 합--------------------\n");
	int  sum = 0;
	i=1;
	while(1) {
		sum = sum + i;
		i = i +2 ;
		if(i>100)
			break;
	}
	printf("\n1부터100까지의 홀수의 합 = %d", sum);
}



