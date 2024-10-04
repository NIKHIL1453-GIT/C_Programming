#include<stdio.h>
int main()
{
	int arr[100],size,i;
	int *ptr = &arr;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	printf("\nEnter the elements of an array:");
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element at arr[%d] = ",i);
		scanf("%d",&arr[i]);
	}
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("\nValue of the element at arr[%d] = %d",i,*(ptr+i));
	}
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("\nAddress of the element at arr[%d] = %p",i,ptr+i);
	}
	return 0;
}
