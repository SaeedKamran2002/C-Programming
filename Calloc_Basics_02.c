#include<stdio.h>
#include<stdlib.h>
int *ownFunctionArray(int ,int*);
int main()
{
	int *intPtr , n ,i , *arrayPtr;
	
	intPtr = (int*) calloc (n,sizeof(int)); //1
	printf("Enter The Size Of Array :");
	scanf("%d", &n);
	
	printf("Enter The Elements Of The Array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(intPtr+i));
	}
	
	printf("\nThe Elements Of The Array are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d",*(intPtr+i));
	}
	
	free(intPtr); //In This we can resize the array
	
	printf("Enter The Size Of Array :");
	scanf("%d", &n);
	
	intPtr=ownFunctionArray(n ,arrayPtr);
	
	printf("Enter The Elements Of The Array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(intPtr+i));
	}
	
	printf("\nThe Elements Of The Array are :\n");
	for(i=0;i<n;i++)
	{
		printf("%d",*(intPtr+i));
	}
}
int *ownFunctionArray(int ,int*)
{
	arrayPtr=(int*)calloc(n,sizeof(int));
	return arrayPtr;
}
