// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

unsigned long long solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    
    unsigned long long sum=(( unsigned long long )N+1)*(N+2)/2;
   for(int i=0;i<N;i++){
      sum-=A[i];
    }
    return sum;
}
