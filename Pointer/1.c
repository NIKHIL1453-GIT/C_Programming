#include<stdio.h>
int main()
{
	int num = 10;
	int *ptr = &num;
	printf("\nValue of Num = %d",num);
	printf("\nAddress of Num = %p",&num);
	printf("\nValue of Num = %d",*ptr);
	printf("\nAddress of Num = %p",ptr);
	return 0;
}
