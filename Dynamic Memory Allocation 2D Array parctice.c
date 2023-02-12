#include<stdio.h>
#include<stdlib.h>
int main()
{
	int  i , j , rows , colm , count=0 ;
	
	printf("Enter The Number Of Rows : ");
	scanf("%d\n",&rows);
	printf("Enter The Number Of Columns : ");
	scanf("%d\n",&colm);
	
    int **ptrArr = (int **)malloc(rows * sizeof(int *)); 
    for (i=0; i<rows ; i++) 
    {
        ptrArr[i] = (int *)malloc(colm * sizeof(int));
	}
	
	
    for (i = 0; i <  rows ; i++) 
    {
      	for (j = 0; j < colm ; j++) 
      	{
         	ptrArr[i][j] = ++count ;  // OR *(*(arr+i)+j) = ++count 
  		}
  	}
  	for (i = 0; i <  rows ; i++) 
    {
    	printf("\n");
      	for (j = 0; j < colm ; j++) 
      	{
         	printf("%d", ptrArr[i][j]);  // OR *(*(arr+i)+j) = ++count 
  		}
  	}
   
	
	
}
