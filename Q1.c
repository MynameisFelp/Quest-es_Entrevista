#include <stdio.h>
int main()
{
    int indice=13,soma=0;
    for(int k=0;k<indice;k++){
        k=k+1;
        soma+=k;
    }
    printf("%d",soma);
    return 0;
}
