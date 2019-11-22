// https://www.hackerrank.com/challenges/permutation-equation/problem
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
    int i,y_val =0;
    int n,x, res =0;
    //printf("\nEnter n:");
    scanf("%d", &n);
    int p[n], y[n];
    //printf("\nEnter array elements:");
    for(i=1;i<= n; i++){
        scanf("%d", &p[i]);
    }

    for(i = 1; i <= n ; i++){
        x = i;
        y[i] = 0;
        res = find(x, p,n);
        //printf("%d\n",res);
        res = find(res, p,n);
        //printf("%d\n",res);
        y[i] = res;
    }
    //printf("\nDone!\n");
    for(i = 1 ; i <= n ; i++)
        printf("%d\n",y[i]);
}
