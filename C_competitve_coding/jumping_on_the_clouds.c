//jumping on the clouds- https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem
#include<stdio.h>
#include<stdlib.h>
int main(){
	int c[8] ={0,0,1,0,0,1,1,0};
	int k ,i , index = 0 , n , e = 100;
	int val= 0;
	printf("\nEnter k");
	scanf("%d",&k);
	n = sizeof(c)/sizeof(c[0]);
	for(i = 0;i<n;i = index){
		index = (i+k)%n; //cloud to be jumped on
		printf("\n--------------------");
		printf("\njumping on index %d", index);

		val = c[index];
		if(val == 1) //thundercloud
			e = e-1-2;
		else 
			e = e-1;
		printf("\n energy is %d ", e);
		if(index == 0)
			break;  //back to the first node

	}
	printf("\nEnergy is %d ", e);
	return 0;
}
