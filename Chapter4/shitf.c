#include<stdio.h>

void main()
{
	int num = 0;
	int result1 = 0;
	int result2 = 0;
	int result3 = 0;

	num = 15;
	result1 = num << 1;
	result2 = num << 2;
	result3 = num << 3;

	printf("1ĭ �̵� ��� : %d \n", result1);
	printf("2ĭ �̵� ��� : %d \n", result2);
	printf("3ĭ �̵� ��� : %d \n", result3);

	num = -16;	
	printf("2ĭ >>�̵� ��� : %d \n", num>>2);
	printf("3ĭ >>�̵� ��� : %d \n", num>>3);
}