#include <stdio.h>
#include<stdlib.h>

void display(int arr[], int n){
	int i;
	printf("\nArray is: ");
	for(i=0;i<n;i++){
		printf("\n %d ", arr[i]);
	}
}

int is_present(int val, int turn[], int n){
	int i;
	for(i=0;i<n;i++){
		if(turn[i] == val)
			return 0;
	}
	return 1;
}

int find_max(int count[], int arr[], int n){
	int max1 = -9999,i,index;
	for(i=0;i<n;i++){
		printf("\n %d", count[i]);
		if(count[i] > max1){
			max1 = count[i];
			index =i;
		}
	}
	//now check if max1 is repeating here twice
	printf("\n%d is maximum element ", max1);
	for(i=0;i<n;i++){
		if(i== index){
			continue;
		}
		else if(count[i] ==max1)
			return 0;
		else
			return max1;
	}
}



int find_mode(int arr[], int n){
	int i,j, res =0;
	int count[n];
	for(i=0 ;i<n ;i++){
		count[i] =0;
		//printf("\n value of i: %d", arr[i]);
		for(j=0; j<n;j++){
				if(arr[j] ==  arr[i]){
					count[i]++;
			}
		}
}
		res = find_max(count,arr,n);
		return res;
}

int main(){
	int i,j, res =0;
	printf("\nEnter n");
	scanf("%d", &n);
	int arr[n];
	printf("\nEnter array elements:\n");
	for(i=0;i< n;i++){
		scanf("%d ", &arr[i]);
	}
	display(arr,n);
	res = find_mode(arr,n);
	printf("\nMode given array: %d ", res);
}
