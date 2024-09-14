//Write a code using if..else.. statement to check whether the given age is eligible for voting or not.
#include<stdio.h>
int main()
{
	int age;
	printf("\nEnter the age = ");
	scanf("%d",&age);
	
	if(age>18)
	{
		printf("\nYou are eligible for voting");
	}
	else
	{
		printf("\nYou are Not eligible for voting");
	}
	
	return 0;
}
