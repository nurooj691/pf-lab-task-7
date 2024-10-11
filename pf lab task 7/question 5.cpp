#include<stdio.h>
int main(){
	int n;
	printf("enter the number of values of array\n");
	scanf("%d", &n);
	printf("enter the elements of array\n");
	int array[n];
	for(int i = 0; i<n; i++){
		scanf("%d", &array[i]);
	}
	printf("the array in reverse order:\n");
	for(int i = n-1; i>=0; i--)
	printf("%d", array[i]);
	printf("\n");
}
