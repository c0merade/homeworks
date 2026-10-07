#include <stdio.h>

int main()
{
	int a = 0;

	printf("Enter any numbers\n");
	scanf("%d", &a);

	if(a % 3 == 0 && a % 5 == 0) {
	printf("yes\n");
	} else {
	printf("No\n");
	}




}
