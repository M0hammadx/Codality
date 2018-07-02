// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

struct Results solution(int A[], int N, int K) {
    struct Results result;
    static int B[100]; //or dynamic alloc
     for (int i = 0; i < N; ++i) {
         B[(i+K)%N]=A[i];
     }
    
    // write your code in C99 (gcc 6.2.0)
    result.A = B;
    result.N = N;
    return result;
}
