#include<stdio.h>
int main()
{
	int var=500;
	int *ptr;
	int **ptr2ptr;
	
	ptr=&var;
	ptr2ptr=&ptr;
	
	printf("The Address Of Var Is : %d\n",ptr);
	printf("The Address Of Pointer Is : %d\n",ptr2ptr);
	printf("The Value Of Var Is : %d\n",*ptr);
	printf("The Value Of Pointer Is : %d",*ptr2ptr);
}
