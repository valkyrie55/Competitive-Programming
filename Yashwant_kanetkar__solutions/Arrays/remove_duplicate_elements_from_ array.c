// C program to delete duplicate elements from an array
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int i,j,n,k; //global variables

void display(int arr[], int n){
	for(i=0;i<n;i++){
		printf("\n%d", arr[i]);
	}
}
void delete_duplicate(int arr[],int n){
	printf("\nAfter deleting duplicate values---");
	for(i=0;i<n;i++){
		for(j=i+1; j<n;){
			if(arr[j] == arr[i]){

				for(k=j; k<n; k++){
					arr[k] = arr[k+1];
				}
				n--;

			}
			else{
				j++;
			}
		}
	}
	for(i = 0; i<n;i++){
		printf("\n%d ", arr[i]);
	}
}

int main(){
	int arr[15]; 
	printf("\nEnter n");
	scanf("%d", &n);
	printf("\nEnter values");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	delete_duplicate(arr,n);

return 0;
}
