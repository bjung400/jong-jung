#include <stdio.h>
#include <time.h>

#define max 1000000

int main(void)
{
	register int i;
	clock_t startTime, endTime, result;

	startTime=clock();
	for (i=0; i<=max; i++)
	{
		printf("%d \n", i);
	}
	endTime=clock();

	result=endTime - startTime;
	printf("레지스터 변수 속도 : %lf 초 \n", (double)result/1000);

	return 0;
}

