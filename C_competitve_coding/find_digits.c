// find digits problem 
// https://www.hackerrank.com/challenges/find-digits/problem?isFullScreen=false&h_r=next-challenge&h_v=zen
int findDigits(int n) {
int count =0;
int rem=0, num =0;
num = n;
    while(n>0){
        rem = n%10;
        //printf("\n %d", rem);
        //handle the arithmetic exception in case rem = 0 for numbers like 1002 we need to skip and check other values
        if(rem ==0){
            n = n/10;
            continue;
        }
        if(num % rem == 0)
            count++;
        n = n/10;
    }
    return count;

}
