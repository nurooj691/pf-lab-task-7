#include<stdio.h>


int main(){
	int size, sum=0;
	printf("enter the size of the array\n");
	scanf("%d", &size);
	int array[size];
	printf("enter the elements of array\n");
		for(int i = 0; i<size; i++)	{	
		scanf("%d", &array[i]);
		sum += array[i];
	
		}
		
	
		
	
		printf("the sum of all the elements of array is %d", sum);
}
