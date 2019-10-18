// find frequency of elements in an array
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int is_present(int val, int n, int arr[]){
	int i;
	for(i=0;i<n; i++){
		if(arr[i] == val)
			return 1;
	}
	return 0;
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
		printf("\n %d occured %d times",arr[i], count[i] );
		done[i] = arr[i];

}
}
}

int main(){
	int arr[10],n,res,i;
	printf("\nEnter n");
	scanf("%d", &n);
	printf("\nEnter items");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
					}
    find_frequency(arr,n);
    printf("%d", res);  
	return 0;
}
