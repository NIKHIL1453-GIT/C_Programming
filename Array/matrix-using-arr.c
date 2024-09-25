/*Write a c program to take row and column numbers of 2D array and elements from the user and display the matrix.*/
#include<stdio.h>
int main()
{
	int i,j,a[100][100],row,col;
	
	printf("\nEnter the row count = ");
	scanf("%d",&row);
	printf("\nEnter the coloumn count = ");
	scanf("%d",&col);
	
	//input
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//ouput
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
