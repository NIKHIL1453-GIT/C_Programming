#include<stdio.h>
//with return type without argument
float div();
float div()
{
	int ans,num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	return (float)num1/(float)num2;
}
int main()
{
	printf("the division is = %.2f",div());
	return 0;
}
