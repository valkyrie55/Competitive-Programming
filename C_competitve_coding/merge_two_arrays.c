#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int i,j,k,n1,n2,m, temp;

void display(int arr[], int n){
	for(i=0;i<n;i++){
		printf("\n%d ",arr[i]);
	}
}

void swap(int *a, int *b){
	temp = *a;
	*a = *b;
	*b = temp;
}

int* sort(int arr[], int n){
	for(i=0;i<n;i++){
		for(j= i+1;j<n;j++){
			if(arr[i] > arr[j]){
				swap(&arr[i], &arr[j]);
			}
		}
	}
	return arr;
}


void merge(){
	int arr[5] ={-4,2,12,43,67};
	int brr[7] = {-2,6,7,8,10,19,39};
	n1 = sizeof(arr)/sizeof(arr[0]);
	n2 = sizeof(brr)/sizeof(brr[0]);
	//sort both the arrays
	int* a = sort(arr,n1);
	printf("\n Array a after sorting");
	display(a,n1);
	int* b = sort(brr,n2);
	printf("\n Array b after sorting");
	display(b,n2);
	//merge both the sorted arrays in ascending order
	m = n1+n2;
	int new_arr[m];
	//int *new_arr = (int*)malloc(sizeof(int)*m);
	i = 0;
	j =0;
	for(i=0;i<=m;i++){
		 //k is for a
		 // j is for b
		 // i is for new_arr
		if(a[k] < b[j]){
			new_arr[i] = a[k];
			k++;
			if(k >= n1){
				for(i++;j<n2;j++,i++){
					new_arr[i] = b[j];
									 }
						}	
						}
		else{
			new_arr[i] = b[j];
			j++;
			if(j >= n2){
				for(i++;k<n1;k++,i++)
				{
					new_arr[i] = a[k];
				}
						}	
	}
}
//arrays merged
	printf("\n New array is: ");
	display(new_arr,m);
}

int main(){
	merge();
	return 0;
}
