#include <stdio.h>

exam1(){
	int num =1, sum=0;
	for(;;)
	{
		sum = sum +num;
		printf("%d까지의 합: %d \n", num, sum);
		num++;
		if( num>5) break;
	}
} 

exam2(){
	int i,j ;
	for(i=1; i <=3 ; i++)
	{
		for(j=1; j<=5; j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
} 

exam3(){
	int i,j;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
} 

exam4(){
		int i,j,n;
		printf("출력할 행 입력: ");
		scanf("%d", &n);
		
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
} 

exam5(){
	int i,j;
	for(i=1; i<=5; ++i)
	{
		for(j=1 ; j <= i; j++ ) 
		{
			printf("*");
		}
		printf("\n");
	}
	
	for( i=4 ; i>=1 ; --i )
	{
		for(j =1; j <= 5-i ; j++)
		{
			printf("*");
		}
		printf("\n");
		
	}
	
} 

exam6(){
	int i,j;
	for( i=2; i<=9; i++)
	{
		printf("***%d단***\n", i); 
		for(j=1; j<=9; j++)
		{
			printf("%d * %d = %d\t", i,j,i*j);
		}
		printf("\n");
	}
	///옆으로 나오는 구구단...................... 
	
}

exam7(){
	int num = 0;
	while(1)
	{
		num++ ;
		printf("%d \n", num);
		if(num == 5)
		 break;
	 } 
}

exam8(){
	int i,j;
	
	for( i=0 ; i<2 ; i++)
	{
		for(j=0 ; j<3 ; j++)
		{
			printf("Be happy~\n");
			if(j==1) break;
		}
	}
}

exam9(){
	int i;
	for( i=0 ; i<10; i++)
	{
		if(i%3 == 0)
		continue ;
		printf("%d", i);
	}
}

exam10(){
	int i = 0;
	while(i<20)
	{
		i++;
		if(i % 2 != 0) continue ;
		
		printf("%d \n", i);
	}
}

exam11(){
	int n = 1, sum = 0;
	
	while(1)
	{
		sum = sum +n;
		if(sum >= 100) break; 
		
		n++;
	}
	printf("sum = %d, n = %d\n", sum, n);
}

exam12(){
	int n, count = 0, sum = 0;
	
	do
	{
		scanf("%d", &n);
		
		
	} while()
	
	printf("합계 : %d \n", sum);
}

exam12(){
	
}

main(){
	int no;
	
	while(1){
		printf("\n문제번호:");
		scanf("%d" , &no);
		printf("%d번 문제==================\n", no);
		switch(no){
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 4: exam4(); break;
			case 5: exam5(); break;
			case 6: exam6(); break;
			case 7: exam7(); break;
			case 8: exam8(); break;
			case 9: exam9(); break;
			case 10: exam10(); break;
			case 11: exam11(); break;
			case 12: exam12(); break;
			case 13: exam13(); break;
		}
	}
} 
