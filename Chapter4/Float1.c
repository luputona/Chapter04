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

	printf("0.1�� 100�� ���� ��� : %f \n",num);

}