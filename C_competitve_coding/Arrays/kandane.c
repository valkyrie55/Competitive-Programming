#include <stdio.h>
#include<stdlib.h>
int n,max_sum,sum_a, sum_b,i;
int kandel(int arr[],int n){
	sum_a = sum_b = 0;
	for(i=0;i<n;i++){
		sum_b = sum_b + arr[i];
		if(sum_b > 0){
			if(sum_b > sum_a)
				sum_a = sum_b;
		}
		else
			sum_b = 0;
	}
	return sum_a;
}

int main(){
	printf("\nEnter the size of array:");
	scanf("%d", &n);
	int arr[n];
	printf("\nEnter the elements of array:");
	for(i=0;i<n;i++)
		scanf("%d", &arr[i]);
	max_sum = kandel(arr,n);
	printf("\nMaximum sum: %d",max_sum);
	return 0;
}
