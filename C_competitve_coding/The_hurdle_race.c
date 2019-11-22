// https://www.hackerrank.com/challenges/the-hurdle-race/problem
#include<stdio.h>
#include<stdlib.h>

int find(int val, int p[],int n){
    int j, res;
    for(j= 1; j <= n; j++){
        if(p[j] == val){
            //printf("\nFound: ");
            return j;
        }
    }
    return 0;
}

int main(){
    int i,k, res =0;
    int n,potion = 0, hurdle =0;
    //printf("\nEnter n:");
    scanf("%d %d", &n, &k);
    int height[n];
    //printf("\nEnter array elements:");
    for(i=0;i< n; i++){
        scanf("%d", &height[i]);
    }
    //printf("\nK = %d",k);
    for(i= 0;i <n;i++){
        hurdle = height[i];
        //printf("\n Hurdle height: %d",hurdle);
        if(k < hurdle){
            //printf("\nHurdle height is more, have potion");
            while(k<hurdle){
                ++k;
                ++potion;
            }
            //printf("\nNew height after hurdle %d", res);
            //printf("\n------------");
        }
    }
    printf("%d", potion);

}
