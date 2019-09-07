//C program to find equilibrium
// Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. 
#include<stdio.h>
int equilibrium(int arr[], int n){
    int i, j, l_sum, r_sum;
    //run a loop taking each element at once
    for(i =0;i<n;i++){
        //for sum of elements < i
      l_sum = 0;
      r_sum = 0;
       for(j = 0;j < i;j++){
           l_sum += arr[j];
       }
       //for sum of elements > i
       for(j = i+1;j < n;j++){
           r_sum += arr[j];
       }
       //check if both are equal
       if(l_sum == r_sum)
        //return equilibrium index
        return i;
    }
}

int main()
{
    int n =0,i;
    printf("\n Enter n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements");
    for(i =0;i < n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",equilibrium(arr,n));
    return 0;
}