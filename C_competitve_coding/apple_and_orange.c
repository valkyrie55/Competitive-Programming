// https://www.hackerrank.com/challenges/apple-and-orange/problem
#include<stdio.h>
#include<stdlib.h>
void count_fruits(int *apples, int * oranges, int m, int n, int a, int b, int s, int t){
	int i, count_apples =0, count_oranges =0;
	//for apples
	for(i=0;i<m;i++){
		if(a + apples[i] >= s)
			count_apples++;
	}
	for(i=0;i<n;i++){
		if(b + oranges[i] <= t)
			count_oranges++;
	}
	printf("\nTotal no of apples: %d \n Oranges %d", count_apples, count_oranges);
}

int main(){
	int s,t,a,b,m,n,i;
	printf("\nEnter s and t");
	scanf("%d %d", &s, &t);

	printf("\nEnter a and b");
	scanf("%d %d", &a, &b);

	printf("\nEnter m and n");
	scanf("%d %d", &m, &n);

	int apples[m], oranges[n];
	printf("Enter distances of m apples");
	for(i = 0;i<m; i++){
		scanf("%d", &apples[i]);
	}

	printf("Enter distances of n oranges");
	for(i = 0;i<n; i++){
		scanf("%d", &oranges[i]);
	}
	count_fruits(apples, oranges,m,n,a,b, s,t);
	return 0;
}
