// https://www.hackerrank.com/challenges/angry-professor/problem
#include<stdio.h>
#include<stdlib.h>

void angryprofessor(int arr[],int n,int k){
    int i, count = 0;
    for(i = 0; i< n;i++){
        if(arr[i] <= 0)
            count++;
    }
    if(count < k)
        printf("YES\n");
    else if(count >= k)
        printf("NO\n");
}

int main(){
    int t,i,j,n,k;
    //printf("\nEnter t:");
    scanf("%d", &t);
    for(i=0; i<t; i++){
        //printf("\nEnter n and k");
        scanf("%d %d", &n, &k);
        int arr[n];
        //printf("\nEnter arrival array of size n");
        for(j=0; j<n ;j++){
            scanf("%d", &arr[j]);
        }
        angryprofessor(arr,n,k);
    }
return 0;
}
