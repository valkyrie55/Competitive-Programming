// Finding maximum and second maximum value in the array of integers
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int i,max1,max, max2,j,n; //global variables

void display(int arr[], int n){
	printf("\n");
	for(i=0;i<n;i++){
		printf("\n%d", arr[i]);
	}
}

int find_max(int arr[], int n){
	int max = -9999;
	for(i=0;i<n;i++){
		if(arr[i] > max)
			max = arr[i];
	}
	return max;
}

int find_secondmax(int arr[], int n, int max1){
	int max = -9999;
	for(i=0;i<n;i++){
		if(arr[i] > max && arr[i] < max1)
			max2 = arr[i];
	}
	return max2;
}

int main(){
	printf("\nEnter n");
	scanf("%d", &n);
	int arr[n]; 
	printf("\nEnter values");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
display(arr,n);
	max1 = find_max(arr,n);
	printf("\nMaximum integer is %d ", max1);
	max2 = find_secondmax(arr,n, max1);
	printf("\nsecond maximum integer is %d ", max2);

return 0;
}
