/*Write a c program to take size of an array and elements from 
the user and display only unique elements of an array.*/
#include<stdio.h>
int main()
{
	int a[100],i,j,size,count;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	//input
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nArray a = ");
	for(i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	
	//output
	printf("\nUnique elements = ");
	for(i=0;i<size;i++)
	{
		count=0;
		for(j=0;j<size;j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j])
				{
					count++;
				}
			}
		}
		if(count==0)
		{
			printf("%d ",a[i]);
		}
	}
	
	return 0;
}
