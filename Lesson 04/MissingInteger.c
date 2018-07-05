// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

int solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    int * bla=calloc((int)1e6,4);
    for(int i=0;i<N;i++){
        if(A[i]>0)
        bla[A[i]-1]++;
    }
    for(int i=0;i<(int)1e6;i++)if(!bla[i])return i+1;
}
