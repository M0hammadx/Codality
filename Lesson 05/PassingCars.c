// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");

long long solution(int A[], int N) {
    // write your code in C99 (gcc 6.2.0)
    
    long long zeros=0,ones=0,res=0; 
    for(int i=0;i<N;i++){
        if(A[i]==0){
            zeros++;
            
        }else{
            res+=zeros;
            if(res>1e9)return -1;
        }
    }
    return res;
}
