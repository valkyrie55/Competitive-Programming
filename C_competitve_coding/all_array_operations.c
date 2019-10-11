//C program to perform insertion, deletion, searching and merge operations
#include<stdio.h>
#include<stdlib.h>
int i,j,k,temp,val,pos,ch, n1, n2,n,m;

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
	printf("\n ----Array a after sorting----");
	display(a,n1);
	int* b = sort(brr,n2);
	printf("\n ----Array b after sorting----");
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
	printf("\n+++++++++++++++++++++++++++");
	display(new_arr,m);
}

void deletion(int arr[], int n){
	printf("\nEnter the index which you want to delete");
	scanf("%d",&pos);
	for(i=pos;i<n;i++){
		arr[i] = arr[i+1];
	}
	arr[n-1] = 0;
	printf("\nArray after deletion at position %d ",pos);
	display(arr,n);
}

void searching(int arr[], int n){
	printf("\nEnter the value you want to search");
	scanf("%d",&val);
	for(i=0;i<n;i++){
		if(arr[i] ==val){
			pos = i;
			break;
		}
	}
	printf("\n%d is at position %d ",val,pos);
	display(arr,n);
}


void insertion(int arr[], int n){
	printf("\nEnter the value you want to insert");
	scanf("%d",&val);
	printf("\nEnter the position where you want to insert");
	scanf("%d",&pos);
	for(i=n-1;i>=pos;i--){
		arr[i] = arr[i-1];
	}
	arr[i] = val;
	printf("\nArray after insertion of %d at position %d ",val,pos);
	display(arr,n);
}

int main(){
	int arr[5] ={11,12,13,14,15};
	n =  sizeof(arr)/sizeof(arr[0]);
	display(arr,n);
	ch = 1;
	while(ch!=5){
		printf("\n+++++++++MENU++++++++");
		printf("\n1. Insertion in array \n2. Deletion in array\n3. Searching in array\n4. Merging two arrays ");
		printf("\n+++++++++++++++++++++");
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch){
			case 1: insertion(arr,n);
				break;
		 	case 2: deletion(arr,n);
		 		break;
			case 3: searching(arr,n);
				break;
			case 4: merge();
				break;
			case 5: exit(0);
				break;
			default: printf("\nInvalid entry");
			}
			}
	return 0;
}
