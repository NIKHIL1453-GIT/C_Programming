/*Write a c program to take row numbers from the user and print the following pyramid pattern.
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
	int row,i,j,k=0;
	printf("\nEnter the row count = ");
	scanf("%d",&row);//5
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(((j%2==0) && (i%2==0)) || ((j%2==1) && (i%2==1)))
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
	return 0;
}
