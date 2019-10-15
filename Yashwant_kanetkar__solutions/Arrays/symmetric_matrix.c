// check if given square matrix is symmetric or not
#include <stdio.h>
#include<stdlib.h>

void display(int arr[3][3]){
	int i,j;
	printf("\nArray is: ");
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
		printf("\t %d ", arr[i][j]);
	}
}
}

void symmetric(int arr[3][3]){
	int i,j, flag =	1;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if(arr[i][j] != arr[j][i]){
				flag =0;
				break;
		}
	}
}
	if(flag == 1)
		printf("\nThis matrix is symmetric");
	
	else
		printf("\nThis matrix is not symmetric");
}

int main(){
	int i,j, n;
	int arr[3][3];
	printf("\nEnter array elements:\n");
	for(i=0;i< 3;i++){
		for(j = 0 ;j<3 ; j++){
		scanf("%d ", &arr[i][j]);
	}
}
	display(arr);
	symmetric(arr);
	return 0;
}
