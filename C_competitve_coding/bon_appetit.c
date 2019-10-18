// https://www.hackerrank.com/challenges/bon-appetit/problem
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void price(int arr[], int n, int k, int b_charged){
	int i, b_actual;
	int cost =0, split;
	for(i=0;i<n;i++){
		if(i == k)
			continue;
		cost += arr[i];
	}
	printf("\nTotal bill is: %d", cost);
	split = cost/2;
	
	printf("\n Per person have to pay %d Rs ", split);
	if(b_charged == split)
		printf("\n Bon Appetit");
	else
	   printf("\n%d",b_charged - split);
}

int main(){
	int arr[10],n,k,i, b_charged;
	int res;
	printf("\nEnter n");
	scanf("%d", &n);
	printf("\nEnter k");
	scanf("%d", &k);
	printf("\nEnter cost of items");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
}
    printf("\nEnter amount that brian charged");
	scanf("%d", &b_charged);
	price(arr, n,k, b_charged);
	return 0;
}
