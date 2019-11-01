// https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem?h_r=next-challenge&h_v=zen
#include<stdio.h>
#include<stdlib.h>
static int count =0;

void beautifuldays(int n, int d){
    int val,rem =0,num=0;
    val = n;
    while(n > 0){
        rem = n%10;
        num = num*10 + rem;
        n = n/10;
    }
    //printf("\n%d - %d is %d",val, num, val-num);
    if((val - num)%d == 0){
        //printf("\nBeautiful day");
        count++;
        //printf("\n %d", count);
    }
}

int main(){
    int i,start,end,d,j;
    scanf("%d %d %d", &start, &end, &d);
    
    for(i=start;i<=end;i++){
        beautifuldays(i,d);       
    }
    printf("%d", count);

return 0;
}
