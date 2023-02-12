#include<stdio.h>
int main()
{
	int arr[5]={10,20,50,80,100};
	int *ptr;
	ptr=&arr[0];
	int i ;
	
	for(i=0;i<5;i++)
	{
		printf("The Value Of Arr[%d] is : %d\n",i+1,*(ptr+i));
		printf("The Address Of Arr[%d] is : %d\n",i+1,(ptr+i));
	}
}
