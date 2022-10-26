#include <stdio.h>
main()
{
	//int score[6];
	
	/*score[0] = 10; 
	score[1] = 33; 
	score[2] = 50;
	score[3] = 88;
	score[4] = 90;
	score[5] = 100;
	
	char alpha[50];
	
	char str[6];
	
	//int arr1[5] = {1,2,3};
	
	//int arr2[7] = {0,0,0,0,0,0,0}
	//int arr2[7] = {0, }
	
	예제1 
	
	int i;
	int num[3];
	
	num[0] = 10;
	num[1] = 20;
	num[2] = 30;
	for (i=0; i<3; i++)
		printf("num[%d] = %d\n", i, num[i]);
	
	예제2 
	int arr[5] = {10, 15, 85, 66, 20};
	printf("%d\n", arr[0]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[4]);
	
	
	예제3 
	int a[5] , i;
	
	for(i=0; i<5; i++)
	{
		a[5] = 5;
	}
	printf("a[5]: %d\n", a[5]);
	printf("a[7]: %d\n", a[7]);
	
	예제4
	int data[6], i;
	
	for(i=0; i <6; i++)
	{
		printf("정수를 입력: ");
		scanf("%d", &data[6]);  
	}
	for(i = 5; i >= 0; i--)
		printf("%d", data[i]);
	
	예제5 
	
	int score[5];
	int i, sum = 0;
	for(i = 0; i < 5; i++)
	{
		printf("%d번 학생의 프로그래밍 성적을 입력:  ", i + 1 );
		scanf("%d", &score[i]);
	 } 
	
	for(i = 0; i < 5; i++)  
		sum += score[i];
	printf("총점 : %d \n", sum );
	printf("평균 : %.2f \n", sum/5.00);
	
	예제6*/
	
	int score[5];
	int i, max = 0;
	for(i = 0; i < 5; i++)
	{
		printf("%d번 학생의 프로그래밍 성적을 입력: ", i+1);
		scanf("%d", &score[i]);
	} 
	for(i = 0; i < 5; i++)
		if(max < score[i])
			max = score[i];
	printf("최고 점수 : %d \n", max);
	
	
	
	
	
	 
	
}
