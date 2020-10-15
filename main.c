#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main()
{
    int x[TAM],y[TAM];
    int i,j;

    for(i=0;i<TAM;i++){
        scanf("%d %d",&x[i],&y[i]);
    }

    for(i=0;i<TAM;i++){
        printf("Dama %d: [%d][%d]\n",i+1,x[i],y[i]);
    }

    for(i=0;i<TAM;i++){
        for(j=i;j<TAM;j++){
            if(x[i]==x[j] && i!=j){
                printf("DAMAS NA MESMA COLUNA %d\n",x[i]);
            }

        }
    }

    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++){
            if(y[i]==y[j] && i!=j){
                printf("DAMAS NA MESMA LINHA %d\n",y[i]);
            }

        }
    }

    return 0;
}
