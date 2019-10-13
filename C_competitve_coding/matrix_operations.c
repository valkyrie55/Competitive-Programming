#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max 3
int i,j,ch, arr3[3][3];

void display(int arr[3][3]){
	printf("\n---DISPLAYING MATRIX---\n");
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
		printf("\t%d ",arr[i][j]);
	}
	printf("\n");
}
}

void add(int arr1[3][3], int arr2[3][3]){
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
		arr3[i][j] = arr1[i][j] + arr2[i][j];
	}}
	printf("\nAfter addition: ");
	display(arr3);
}
void multiply(int arr1[3][3], int arr2[3][3]){
	int k=0;
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			arr3[i][j] = 0;
			for(k=0;k<3;k++){
			arr3[i][j] = arr3[i][j] +(arr1[i][k] * arr2[k][j]);
	}
}
}
	printf("\nAfter multiplication: ");
	display(arr3);
}

void transpose(int arr[3][3]){
	for(i=0;i<max;i++){
		for(j=0;j<max;j++){
			arr[i][j] = arr[j][i];
	}
}
	printf("\nAfter transpose: ");
	display(arr);
}

int main(){
	int mat1[3][3]= 
		{1,2,3,2,1,4,4,3,2
	};
	int mat2[3][3]= {3,2,3,4,3,2,1,3,1};
	display(mat1);

	display(mat2);
	ch = 1;
	 while(ch!=5){
	 	printf("\n+++++++++MENU++++++++");
	 	printf("\n1. Addition of matrices \n2. Multiplication of matrices \n3. Transpose of a matrix \n4. Exit ");
	 	printf("\n+++++++++++++++++++++");
	 	printf("\nEnter your choice");
	 	scanf("%d",&ch);
	 	switch(ch){
	 		case 1: add(mat1, mat2);
			break;
	 	 	case 2: multiply(mat1,mat2);
	 	 		break;
			case 3: transpose(mat1);
				break;
	 		case 4: exit(0);
				break;
			default: printf("\nInvalid entry");
	 		}
	 		}
	return 0;
}
