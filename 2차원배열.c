#include <stdio.h>

void exam15(){
	int num[3][4] = {0};
	int i,j ;
	
	for (i = 0; i<3; i++)
		for(j =0; j<4; j++)
			printf("%d", num[i][j]);
}

void exam16(){
	int a[2][3] = {{100,90,80}, {70,60,50}};
	int i,j;
	
	for( i = 0 ; i <= 1 ; i ++)
	{
		for(j = 0; j<=2 ; j++)
			printf("%4d", a[i][j]);
			printf("\n");
	 } 
}

void exam17(){
	int a[4][2];
	int tot = 0;
	double avg;
	int i,j;
	
	for(i = 0; i <=3; i++)
	{
		printf("%d번 학생의 수학, c언어 성적 입력: ", i + 1);
			for(j = 0; j < 2; j++)
				scanf("%d", &a[i][j]); 
	}
	for(i=0; i<4; i++){
		tot=0;
		for(j=0; j<2; j++)
			tot += a[i][j];
			
			avg = tot/ 2.0;
			printf("%d번 학생의", i+1);
			printf("총점: %3d, 평균: %2.lf\n", tot, avg);
	}
}

void exam18(){
	char city[][10] = { "Seou", "Busan", "Incheon"};
	
	printf("%s\n",city[0]);
	printf("%s\n",city[1]);
	printf("%s\n",city[2]);
}

void exam19(){
	char ani1[][10] = {
	{'c', 'a', 't', '\0'},
	{'h', 'o', 'r', 's', 'e', '\0'},
	{'d', 'o', 'g', '\0'},
	{'t', 'i', 'g', 'e', 'r', '\0'}
	};
	
	char ani2[][10] = {"cat", "horse", "dog", "tiger"};
	int i,j;
	
	for(i=0;i<4;i++)
		printf("%s ", ani1[i]);
	printf("\n");
	for(i=0; i<=3; i++)
		printf("%s", ani2[i]);
	

}

void exam1(){
	int arr[5];
	int max, min, i;
	for(i=0;i<5;i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}
	max = 0, min = 100;
	for(i=0;i<5;i++)
	{
		if ( max < arr[i] ) max = arr[i];
		if (min > arr[i]) min = arr[i] ;
	}
		printf("최대값: %d\n", max );
		printf("최소값: %d\n", min );
}


void exam2(){
	int arr[5], sum =0, i;
	float avg;
	for ( i=0; i<5; i++)
	{
		printf("%d라운드 점수: ", i+1);
		scanf("%d", &arr[5]);
		sum = sum + arr[5];
	}
	
	printf("\n총점은 %d점이며, 평균은 점입니다.", sum, avg);
}


void exam3(){
	int i, n;
	int a[10] = {65, 45, 73, 5, 82, 25, 3, 34, 12, 20};
	
	printf("검색할 데이터: ");
	scanf("%d", &n);
	for(i=0;i<10;i++)
	{
		if(n==a[i])
		{
			printf("%d는 a[%d]에 있습니다.\n", n,i );
			break;
		}
	}
	if (i ==10)
		printf("%d은(는) 찾을 수 없습니다.\n", n);
}


void exam6(){
	char mark[5][5] = {'\0'};
	int i,j ;
	for(i =0; i <5; i++)
	{
		for(j=0; j<5; j++)
		{
			if( i = j) mark[i][j] = 'X';
		}
	}
	for(i=0; i<=5; i++)
	{
		for(j=0; j <=5; j++)
		{
			printf("%c", mark[i][j]);
		}
		printf("\n");
	}
}


void exam5(){
	int arr[4][5];
	int i, j, cnt = 1;
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			arr[i][j] = cnt++;
		}
	}
	for (i=0; i<4; i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%5d", arr[i][j]);
		}
		printf("\n");
	}
}




main(){
	int num;
	while(1){
    	printf("\n문제번호: ");
		scanf("%d", &num);
		printf("%d번문제===============\n", num);
		switch(num){
			case 15: exam15(); break;
			case 16: exam16(); break;
			case 17: exam17(); break;
			case 18: exam18(); break;
			case 19: exam19(); break;
			case 1: exam1(); break;
			case 2: exam2(); break;
			case 3: exam3(); break;
			case 6: exam6(); break;
			case 5: exam5(); break;
            default: return 0 ;
		}
	}
}

