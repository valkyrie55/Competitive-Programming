// https://www.hackerrank.com/challenges/sock-merchant
// find frequency of elements in an array
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
static int pairs =0;
int is_present(int val, int n, int arr[]){
	int i;
	for(i=0;i<n; i++){
		if(arr[i] == val)
			return 1;
	}
	return 0;
}

void count_pair(int val){
	 pairs = pairs + val/2;
}

void find_frequency(int arr[],int n){
	int done[n],count[n],i,j;
	for (i = 0; i < n; ++i)
	{   
		done[i] = 0;
		if(is_present(arr[i],n,done)){
			continue;
		}
		else{
			count[i] = 0;
		for (j = 0; j < n;j++)
		{

			if(arr[j] == arr[i])
				count[i]++;
		}
		count_pair(count[i]);
		//printf("\n %d occured %d times",arr[i], count[i] );
		done[i] = arr[i];

			} //end of else
}
	printf("%d ",pairs);		
}

int main(){
	int arr[10],n,res,i;
	//printf("\nEnter n");
	scanf("%d", &n);
	//printf("\nEnter items");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
					}
    find_frequency(arr,n); 
	return 0;
}
