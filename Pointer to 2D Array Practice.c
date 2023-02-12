#include<stdio.h>
int main()
{
	int arr[4][2] = {{4,2},{5,6},{8,7},{9,4}};
	int i , j ;
	int *ptr;
	ptr=&arr[0][0];
	
	for(i=0 ; i<4 ; i++)
	{
		for(j=0 ; j<2 ; j++)
		{
			printf("The Address Of i is = %d\n",(ptr+i));
			printf("The Address Of j is = %d\n",((ptr+i)+j));
			printf("The Value Of Array[%d][%d] is = %d\n",i+1,j+1,*((ptr+i)+j));
		}
	}
}
