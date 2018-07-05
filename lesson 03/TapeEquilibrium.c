// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#define MIN(X, Y) (((X) < (Y)) ? (X) : (Y))

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
int sum=0,sumSoFar=0,ans=100000000;
    for(int i=0;i<N;i++){
        sum+=A[i];
    }

    for(int i=0;i<N-1;i++){
        sumSoFar+=A[i];
        ans=MIN(abs(sum-2*sumSoFar),ans);
    }

    return ans;
}
