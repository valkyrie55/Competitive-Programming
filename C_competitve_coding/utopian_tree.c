// https://www.hackerrank.com/challenges/utopian-tree/problem
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void utopian_tree(int k){
  int n,h = 1,i;
  //printf("\nEnter no. cycles:");
  scanf("%d", &n);
  //printf("Period \t Height");
  for(i=0;i<=n;i++){
    if(i==0)
        h = 1;
    else if(i %2 !=0)
        h = h*2;
    else if(i%2 ==0)
        h = h+1;
    }
    printf("%d\n",h);

}

int main(){
  int k,i,val,h;
  //printf("\nEnter no. of testcases:");
  scanf("%d", &k);
  for(i = 1; i<= k;i++){
    utopian_tree(i);
    //printf("\nTestcase %d: %d",i,val);
  }
    return 0;
}
