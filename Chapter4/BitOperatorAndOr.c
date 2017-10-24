#include<stdio.h>

void main3()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	int arryResult[20];
	int i = 0;
	int j = 0;
	int temp = 0;

	num1 = 15;
	num2 = 20;
	num3 = num1&num2;
	
	temp = num1;
	for (i = 0; i < num1; i++)
	{
		arryResult[i] = temp % 2;
		temp = temp / 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", arryResult[j]);
	}


	printf("\nAND 연산자의 결과 : %d \n", num3);
	
	
	num3 = num1 | num2;
	printf("OR 연산자의 결과 : %d \n",num3);
	

}