#include<stdio.h>
int determinante(int *matriz,int tamanho){
    if(tamanho == 1){
        return *matriz;
    }
    int i,j,psm,psb,det_soma,det_sub,det=0;
    for(i=0;i<tamanho-1;i++){
        psm=i;
        psb=(tamanho-1)-i;
        det_soma=1;
        det_sub=1;
        for(j=0;j<tamanho;j++){
            det_soma*=*(matriz+j+(psm*tamanho));
            det_sub*=*(matriz+j+(psb*tamanho));
            psm+=1;
            psb-=1;
            if(psm == tamanho){
                psm=0;
            }
            if(psb == -1){
                psb=tamanho-1;
            }
        }
        det+=(det_soma-det_sub);
    }
    return det;
}

void main(){
    int matriz[3][3];
    
    //linha 1
    matriz[0][0]=1;
    matriz[0][1]=2;
    matriz[0][2]=3;
    
    //linha 2
    matriz[1][0]=3;
    matriz[1][1]=2;
    matriz[1][2]=1;
    
    //linha 3
    matriz[2][0]=1;
    matriz[2][1]=2;
    matriz[2][2]=0;
    //exemplo de utilizacao
    printf("%i",determinante(&matriz[0][0],3));
}
