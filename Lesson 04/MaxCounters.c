// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))
struct Results solution(int N, int A[], int M) {
    struct Results result;
    
    int* bla=calloc(N,4);
  
    int mx=0,lastmx=0;
    for(int i=0;i<M;i++){
        if(A[i]<=N){
            if(bla[A[i]-1]<lastmx)
                bla[A[i]-1]=lastmx+1;
            else 
                bla[A[i]-1]++;
                mx=MAX(mx,bla[A[i]-1]);
        }else{
            lastmx=mx;
        }
    }
     for(int i=0;i<N;i++){
          if(bla[i]<lastmx)
                bla[i]=lastmx;
     }
    result.C = bla;
    result.L = N;
    return result;
}
