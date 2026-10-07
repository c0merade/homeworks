#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int temp = 0;

	printf("Enter the first number\n");
	scanf("%d", &a);

	printf("Enter the second number\n");
	scanf("%d", &b);

	temp = a;
	a = b;
	b = temp;

	printf("Result %d %d\n", a, b);
}
