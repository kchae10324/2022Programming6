#include <stdio.h>

func1(){
	printf("\n[예제8]=============\n");
	int i, n, fact=1;
	printf("n:");
	scanf("%d", &n);
	for(i=1; i<=n; i++ ){
		fact = fact *1 ;
	}
	printf("%d! = %d\n", n, fact);
}

func2(){
	printf("\n[예제9]=============\n");
	int i, dan ;
	printf("원하는 단은?");
	scanf("%d", &dan);
	printf("\n*** %d단 ***\n", dan);
	for(i=1; i<10; i++ )
	{
		printf("%d * %d = %d\n", dan, i, dan*i);
	 } 
	
}

func3(){
	printf("\n[예제10]=============\n");
	
	int n1, n2, i;
	printf("두 수 입력 : ");
	scanf("%d %d", &n1, &n2);
	if ( n1 < n2 )
	{
		for(i=n1; i<= n2; i++)
			printf("%d", i);
	 } 
	else
	{
		for(i=n2; i<= n1; i++)
			printf("%d", i);
	}
}
func4(){
	printf("\n[예제10]=============\n");
	int num1, num2, i;
	
	printf("공배수를 구할 두 정수 입력 : ");
	scanf("%d %d", &num1, &num2); 
	for(i=1; i<=100; i++)
		if(i%num1==0 && i%num2==0)
			printf("%d", i);
}



main()
{
	int no; 
	while(1){
		printf("몇번문제?:");
		scanf("%d", &no);
		printf("%d번문제\n" , no);
		switch(no){
			case 1: func1();break;
			case 2: func2();break;
			case 3: func3();break;
			case 4: func4();break;
			default:
				printf("잘못입력 \n");
				return 0;
		}
	}
}


