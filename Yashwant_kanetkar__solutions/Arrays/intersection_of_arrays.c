// C program to find intersection of two arrays
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int i,j,n,k; //global variables
//static int c[4];
void display(int arr[], int n){
	printf("\nArray is ------\n");
	for(i=0;i<n;i++){
		printf("\n%d", arr[i]);
	}
}

void is_present(int val, int b[],int c[], int i){
	for(i=0;i<n; i++){
		if(b[i] == val){
			printf("\n%d is present here",val);
			c[i] = val;
	}
}

}

void intersection(int a[], int b[], int c[], int n){
	int val;
	for(i=0;i<n;i++){
		c[i] = 0;
		is_present(a[i], b,c,i);
		}
	display(c,n);
}

int main(){
	int a[25], b[30];
	printf("\nEnter n");
	scanf("%d", &n);
	int c[30]; 
	printf("\nEnter values in a ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	printf("\nEnter values in b ");
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	display(a,n);
	display(b,n);
	intersection(a,b,c,n);
return 0;
}
