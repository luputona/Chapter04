#include<stdio.h>

void main2()
{
	int i = 0;
	float num = 0.0f;

	for (i = 0; i<100; i++)
	{
		num += 0.1;
		printf("%.20f\n",num);
	}

	printf("0.1을 100번 더한 결과 : %f \n",num);

}