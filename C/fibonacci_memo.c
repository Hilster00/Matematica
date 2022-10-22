#include<stdio.h>
long long int fibonacci(int n, long long int *memoria){
    if( *(memoria + n) != -1){
        return *(memoria + n);
    }
    if(n < 2){
        *(memoria + n) = n;
        return *(memoria + n);
    }
    *(memoria + n) = fibonacci(n-1,memoria)+fibonacci(n-2,memoria);
    return *(memoria + n);
}
long long int fib(int n){
    long long int memo[n+1];
    for(int i=0;i<=n;i++){
        memo[i]=-1;
    }
    return fibonacci(n,&memo[0]);
}
void main(){
    int n;
    printf("Digite o valor para ser encontrado na sequencia de fibonacci:");
    scanf("%d",&n);
    printf("\nFIB(%d) = %lld",n,fib(n));
}
