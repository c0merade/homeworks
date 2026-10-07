#include <stdio.h>

int main()
{
	int a = 0;
	int last_digit = 0;
	
	printf("Enter any numbers\n");
	scanf("%d", &a);

	last_digit = a % 10;
	printf("Last digit is %d\n", last_digit);



}
