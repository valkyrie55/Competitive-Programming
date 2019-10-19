// Kickstart round G
// https://codingcompetitions.withgoogle.com/kickstart/round/0000000000050e02/000000000018fd0d    
#include<stdio.h>
#include<stdlib.h>


int i,s,j,x, count = 0;
int read = 0;

int is_present(int val, int arr[], int M){
    int i;
    for(i=1;i<= M; i++){
        if(arr[i] == val)
            return 1;
    }
    return 0;
}


int main(){
    int t,N,Q,M;
    //test cases
    printf("\n t:");
    scanf("%d", &t);
    ////////////////////////////////
    for(x=1;x<=t;x++){
    	read =0;
    //N, M, Q
    printf("\n N,M, Q:");
    scanf("%d %d %d", &N,&M,&Q);
    int torn[M];
    printf("\n Torn pages indices:");
    for(i=1;i<=M;i++){
    	scanf("%d", &torn[i]);
    }
    
    //readers
    int R[Q];
    printf("\n Reader array:");
    for (int i = 1; i <= Q; ++i)
    {
        scanf("%d", &R[i]);
    }
    //count no. of pages
    if(N== M){
        read = 0;
        printf("\nCase #%d: %d",x, read);
    }
    else{
    for(s=1; s<= Q; s++){
        read = 0;
        for(i= 1;i <=N ; i++){
                if(is_present(i, torn,M))
                    continue;
                else{
                    if(i%R[s] == 0)
                    //printf("\nPage %d is torned", torn[j]);
                     read++;    
                                } //else            
                             // end of j
            } //end of i
            count += read;
            //printf("\nReader %d has read %d pages ", s, read);
        }// end of s

        printf("\nCase #%d: %d",x, read);
    }// end of else
    ///////////////////////////////
}
return 0;
}
