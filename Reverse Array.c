#include<stdio.h>
int main()
{
	int i , num , array[num];
	int *ptr;
		
	printf("How Many Numbers You Want To Store In Array : ");
	scanf("%d",&num);
	
	ptr=&array[0];
		
	printf("\nEnter The Values:\n");
	
	for(i=0 ; i<num ; i++)
	{
		printf(" Element %d : ",i+1);
	  	scanf("%d",ptr+i);
	}
	
	printf("\nThe Elements Stored In Array Are:\n");
	for(i=0 ; i<num ; i++)
	{
		printf(" Element %d : %d\n",i+1,*(ptr+i));
	}
	
	ptr = &array[num - 1];

   printf("\n The Elements of array in reverse order are :");

   for (i = num; i > 0; i--) 
   {
      printf("\n Element  %d : %d  ", i, *ptr);
      ptr--;
	}
}
