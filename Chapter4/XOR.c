#include<stdio.h>

void main5()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int i, j;
	int result[30];
	int temp = 0;

	
	num1 = 15;
	num2 = 20;
	num3 = num1 ^ num2;
	temp = num1;

	for (i = 0; i < 16; i++)
	{
		result[i] = temp % 2;
		temp = temp / 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", result[j]);
	}
	printf("\n");
	temp = num2;
	for (i = 0; i < 16; i++)
	{
		result[i] = temp % 2;
		temp = temp / 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", result[j]);
	}
	printf("\n");

	printf("XOR 연산자의 결과 : %d \n", num3);

	num2 = ~num1;
	printf("NOT 연산자의 결과 : %d \n", num2);

}