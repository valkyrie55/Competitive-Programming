// https://www.hackerrank.com/challenges/strange-advertising/problem
// find frequency of elements in an array
#include<stdlib.h>
#include<stdio.h>

int main(){
    int i,n,c = 0;
    //printf("\nEnter n");
    scanf("%d", &n);
    int day[n], shared[n], liked[n],cumulative[n],p;
    day[1] = 1;
    shared[1] = 5;
    for( i=1;i<=n ;i++){
        cumulative[i] = 0;
        liked[i] = shared[i]/2;
        p = 3* liked[i];
        c += liked[i];
        cumulative[i] = c;
        shared[i+1] = p;
        day[i+1] = i+1;
    }
    // printf("\n After %d days---\n",n);
    // printf("Day\tShared \t Liked \t Cumulative");
    // for(i=1;i <=n ;i++){
    //     printf("\n%d\t %d\t %d\t %d\t",day[i], shared[i],liked[i], cumulative[i]);
    // }
    printf("%d",cumulative[n]);

    return 0;
}
