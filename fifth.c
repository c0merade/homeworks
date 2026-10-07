#include <stdio.h>

int main()
{
	int num = 0;
	int units = 0;
	int tens = 0;
	int hundreds = 0;
	int sum = 0;

	printf("Enter three-digit number\n");
	scanf("%d", &num);

	units = num % 10;
	tens = (num / 10) % 10;
	hundreds = num / 100;
	sum = units + tens + hundreds;

	printf("summary of the digits %d \n", sum);




}
