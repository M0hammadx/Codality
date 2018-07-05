// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int* a=(int *)calloc(N,sizeof(int));
    for(int i=0;i<N;i++){
     if(A[i]>N)return 0;
     a[A[i]-1]++;   
    }
    for(int i=0;i<N;i++){
    if(a[i]!=1)return 0;
    }

    return 1;
}
