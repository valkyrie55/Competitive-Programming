// https://www.hackerrank.com/challenges/drawing-book/problem?utm_campaign=challenge-recommendation&utm_medium=email&utm_source=24-hour-campaign

#include<stdio.h>
#include<stdlib.h>
int n,p, i= 1,count= 0, val, res1, res2;

int countfromfront(int n, int p){
	// for first page count is always 0
    if((i == p || i == n))
    	return 0;
    for(i=2;i<=n; i= i+2){
    	count++;
    	if(p == i || p == i+1)
    		return count;
    }
}

int find(int n, int p){
	count =0;
	for(i=n;i>= 1; i= i-2){
    	if(p == i || p == i-1)
    		return count;
    	else
    		count++;
    }
}

int countfromend(int n, int p){
	// for first page count is always 0
    if(n % 2 == 0){ //even
    	n = n+1;
    	val =  find(n,p);
    }
    else if(n % 2 != 0) //odd
    	val =  find(n,p);
    return val;
}

int main(){
    printf("\nEnter n :");
    scanf("%d", &n);
    
    printf("\nEnter p :");
    scanf("%d", &p);
    res1 = countfromfront(n,p);
    res2 = countfromend(n,p);
    printf("\nPages turned from front: %d", res1);
    printf("\nPages turned from end: %d", res2);
    printf("\nMinimum no. of pages: %d",(res1 > res2 ? res2: res1));
return 0;
}
