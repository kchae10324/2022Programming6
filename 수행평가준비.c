#include <time.h>

exam1(){
	int i = 30;
	while(i>=10)
	{
		printf("%d ", i);
		i = i-2;
	 } 
} 

exam2(){
	int i=1 , n, sum=0;
	
	printf("합을 구할 마지막 수 입력: ");
	scanf("%d", &n);
	
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("1부터 %d까지의 합은 %d입니다\n", n,sum);
	
} 

exam3(){
	int i = 0 , sum = 0;
	
	while(1)
	{
		i++;
		if(i > 10) break;
		if (i%5==0) continue;
		sum = sum +i;
	}
	printf("sum = %d\n", sum);
} 

exam4(){ 
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
			printf("*");
		printf("\n");
	}
	for(i=4; i>=1; --i)
	{
		for(j=1; j<=i; j++)
			printf("*");
		printf("\n");
	}
} 

exam5(){
	int n,a;
	
	printf("4자리수 입력: ");
	scanf("%d", &n);
	
	do{
		a = n %10;
		printf("%d", a);
		n = n/10;
	} while(n>0);
} 

exam6(){
	int n, a1 = 0, a2 = 1, a3, i;
	printf("몇 번째 항까지 구할까요? ");
	scanf("%d", &n);
	for( i =1; i<=10; i++)
	{
		printf("%d", a1);
		a3 = a1 + a2;
		
		a1 = a2;
		a2 = a3;
	}
} 

exam7(){
	int a, b, temp, i;
	printf("***두 수 구간의 숫자 출력하기 ***\n");
	printf("두 수 입력: ");
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	for(i=a; i<=b; i++)
		printf("%d ", i);
} 

exam8(){
	int i, j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<i; j++)
		{
			printf("0");
		}
		printf("*\n"); 
	}
} 

exam9(){
	int i,j;
	for(i=1; i<=9; i++)
	{
		for(j=2; j<=5; j++)
		printf("%2d *%2d = %2d\t", j,i,j*i);
		printf("\n");
	 
	}
		printf("\n");
		for(i=1; i<=9; i++)
	{
		for(j=6; j<=9; j++)
		printf("%2d *%2d = %2d\t", j,i,j*i);
		printf("\n");
	}
}
exam10(){
	int i, su, cnt = 0;
	
	printf("숫자 입력 : ");
	scanf("%d", &su);
	
	i =1;
	while(i = su)
	{
		if(su%i ==0)
			cnt ++;
		i++;
	}
	if(cnt==2)
	printf("%d는 소수\n", su);
	else
		printf("%d는 소수가 아님\n", su);
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
		}
	}
}

