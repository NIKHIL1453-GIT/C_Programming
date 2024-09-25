/*basic array declaration
--> An ARRAY can accept multiple value but with same datatype.*/
#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	float b[2]={12.3,45.6};
	char c[5]={'a','B','c','D','e'};
	
	printf("\nINT ARRAY:=");
	printf("\n%d",a[0]);
	printf("\n%d",a[1]);
	printf("\n%d",a[2]);
	printf("\n%d",a[3]);
	printf("\n%d",a[4]);
	
	printf("\nFLOAT ARRAY:=");
	printf("\n%.2f",b[0]);
	printf("\n%.2f",b[1]);
	
	printf("\nCHAR ARRAY:=\n");
	printf(" %c\n",c[0]);
	printf(" %c\n",c[1]);
	printf(" %c\n",c[2]);
	printf(" %c\n",c[3]);
	printf(" %c\n",c[4]);
	return 0;
}
