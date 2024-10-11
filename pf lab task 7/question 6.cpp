#include<stdio.h>
	
int main(){

	int array[30];
	printf("enter the elements of arrray");
	for(int i = 0; i<=29; i++){
		scanf("%d", &array[i]);
	}
	int max = array[0];
	int min = array[0];
	for(int i =0; i<30; i++){
		if(array[i]>max)
		max = array[i];
	}
	for(int i=0; i<30; i++){
	if(array[i]<min)
	min = array[i];
}
	printf("the maximum is %d", max);
	printf("the minimun is %d", min);
}
