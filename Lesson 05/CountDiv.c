// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

long long solution(int A, int B, int K) {
    // write your code in C99 (gcc 6.2.0)
    return B/K-A/K+!(A%K);
}
