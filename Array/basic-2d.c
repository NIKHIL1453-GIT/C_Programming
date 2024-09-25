//Write a c program to take row and column numbers of 2D array and elements from the user and display the matrix.
#include<stdio.h>
int main()
{
	int a[3][2] = {{1,2},{3,4},{5,6}};
	int i,j;
	
	printf("\nSingle Element:a[%d][%d] = ",1,0);
	printf("%d\n",a[1][0]);
	
	printf("\nWhole Array:a = \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
