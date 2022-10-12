#include <stdio.h>
int determinante(int *vetor,int tamanho){
    return 0;
}
void main(){
    int a[2][2];
    a[0][0]=1;
    a[0][1]=2;
    a[1][0]=10;
    a[1][1]=11;
    int *b;
    b=&a[0][0];
    b=b+3;
    printf("%d",*b);
}
