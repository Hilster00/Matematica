#include<stdio.h>
long int fat(int n){
    long int retorno=1;
    int i;
    for(i=1;i<=n;i++){
        retorno*=i;
    }
    return retorno;
}

void main(){
    //exemplo de utilizacao
    printf("%li",fat(5));
}
