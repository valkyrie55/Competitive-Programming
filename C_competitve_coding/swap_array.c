//given an array return
/* 1) 0 if the array is sorted
   2) 1 if the array can be sorted with one swap
   3) -1 if the array can't be sorted in one swap
 */
#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
	int *temp;
	temp = a;
	a = b;
	b = temp;
}

bool sorted(int arr[], int n){
	int i;
	if(n ==0|| n==1)
		return true;
	for(i=1;i<n;i++){
		//unsorted pair found
		if(arr[i-1]> arr[i])
			return false;
	}
	return true;
}

int swapsort(int arr[]){
	int i,j,n = sizeof(arr)/sizeof(arr[0]);	 
	if(sorted(arr,n))
		return 0; //already sorted
	for(i = 0;i < n; ++i){
		for(j=i+1;j<n;++j){
			swap(&arr[i],&arr[j]);
			if(sorted(arr,n))
				return 1;
			swap(&arr[i],&arr[j]);
		}
	}
	return -1;
}

int main(){
	int arr[6] = {1,2,3,4,5,7};
	int res = swapsort(arr);
	printf("\n%d",res);
	return 0;
}