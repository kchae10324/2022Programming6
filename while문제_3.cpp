#include <stdio.h>
main()
{
	int i, su, cnt=0;
	printf("�����Է�:");
	scanf("%d", &su);
	
	i = 1;
	while(i <= su){
		if(su%i==0)
			cnt++;
			
		i++;
	}
	if(cnt == 2)
		printf("%d�¼Ҽ�\n", su);
	else 
		printf("%d�¼Ҽ��� �ƴ�\n", su);
}
