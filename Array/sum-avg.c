/*Write a c program to take size of an array and elements from the user and print 
the sum and average of all the elements*/
#include<stdio.h>
int main()
{
	int a[100];
	int i,size,sum=0;
	
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	//input
	for(i=0;i<5;i++)
	{
		printf("\nEnter the element in a[%d]: = ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		sum = sum +a[i];
	}
	
	//output
	printf("\nArray a=");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	
	printf("\nSum of all elements of an array = %d",sum);
	printf("\nAverage of all elements of an array = %.2f",(float)sum/(float)size);
	
	return 0;
}
