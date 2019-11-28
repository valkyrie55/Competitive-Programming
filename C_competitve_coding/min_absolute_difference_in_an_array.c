// https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=greedy-algorithms

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n,i =0,k=0, abs = 0;
    int min = 9999999999;
    //printf("\nEnter n:");
    scanf("%d", &n);
    int arr[n];
    //printf("\nEnter array elements: ");
    for(i=0;i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0;i<n;i++){
        for(k=0;k<n;k++){
            if(k != i){
                // printf("\n(%d", arr[i]);
                // printf(" %d)", arr[k]);
                abs = (arr[i] - arr[k]);
                if(abs <0){
                    abs = 0- abs;
                }
                //printf(" abs : %d", abs);  
                if(abs < min)
                    min = abs;
            }
        }
    }
    //printf("\nMinimum absolute value is: %d", min);
    printf("%d", min);
}
