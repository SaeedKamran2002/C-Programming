#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *intPtr;
	
	intPtr = (int*) malloc (sizeof(int)); //1
	printf("Enter The Integer");
	scanf("%d", intPtr);
	
	intPtr = (int*) malloc (sizeof(int));//2
	printf("Enter The Integer");
	scanf("%d", intPtr);
	
	intPtr = (int*) malloc (sizeof(int));//3
	printf("Enter The Integer");
	scanf("%d", intPtr);
	
	printf("The Integer : %d" , *intPtr);//In this only third value will be printed as it will lost the addresses of the first two values
}
