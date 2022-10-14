#include<stdio.h>
long long int fib(int n){
    long long int a1=0,a2=1,r=0;
    int i;
    for(i=0;i<n;i++){
        r=a1+a2;
        a1=a2;
        a2=r;
    }
    return r;
}
void main(){
    //exemplo de utilizacao
    printf("%lli",fib(10));
}
