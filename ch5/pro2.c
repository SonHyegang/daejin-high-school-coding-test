#include<stdio.h>
int check_string(char str1[80], char str2[80]) {
	//const�� ���� �ٲ� �� ���� ���°� �ȴ� > �б⸸ ����
	while(*str1!='\0'||*str2!='\0'){
		if(*str1++!=*str2++)
			return 0;
	}
	return 1;
}
int main()
{
	char str1[80], str2[80];
	printf("Enter two strings : ");
	scanf("%s %s",str1, str2);

	if (check_string(str1, str2))
		printf("%s and %s are equal.", str1, str2);
	else
		printf("%s and %s are not equal.", str1, str2);
	//���׿����� strcmp

	return 0;
}
