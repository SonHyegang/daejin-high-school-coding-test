#include<stdio.h>
int main()
{
	int i,j;
	for (i = 0;i < 5;i++) {
		for (j = 0;j <= 4 - i;j++)
			printf(" ");
		for (j = 0;j < i * 2 + 1;j++)
			printf("*");
		printf("\n");
	}
	for (i = 3;i >= 0;i--) {
		for (j = 0;j <= 4 - i;j++)
			printf(" ");
		for (j = 0;j < i * 2 + 1;j++)
			printf("*");
		printf("\n");
	}
	
	return 0;
}
