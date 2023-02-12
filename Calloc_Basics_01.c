#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *intPtr , n ,i;
	
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
	
	intPtr = (int*) realloc (intPtr,n*sizeof(int));
	
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
}
