#include<stdio.h>
//With return-type and With argument
int add(int a,int b);
int add(int a,int b)
{
	int ans;
	ans = a+b;
	return ans;
}
int main()
{
	int ans,num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	ans = add(num1,num2);
	printf("\nThe addition of %d and %d = %d",num1,num2,ans);
	return 0;
}
