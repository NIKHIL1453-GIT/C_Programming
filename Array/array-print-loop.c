/* BASIC ARRAY PRINTING WITH LOOP*/
#include<stdio.h>
int main()
{
	int a[5]={101,102,103,104,105};
	int i;
	
	printf("\nINT ARRAY:=");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	
	return 0;
}
