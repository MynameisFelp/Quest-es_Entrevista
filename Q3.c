#include <stdio.h>
int main(){
    int i,dias_mes,cont=0,cont1=0;
    double faturamento_dia[1000],faturamento_mes,menor,maior,media;
    scanf("%d",&dias_mes);
    for(i=1;i<=dias_mes;i++){
       scanf("%lf",&faturamento_dia[i]);
       faturamento_mes+=faturamento_dia[i];
       if(faturamento_dia[i]!=0){
        cont++;
       }
    }
    // Calculo do menor
    menor = faturamento_dia[1];
    for (i = 1; i <=dias_mes; i++){
        if (faturamento_dia[i]<menor)
            menor = faturamento_dia[i];
    }
    // Calculo do maior
     maior = faturamento_dia[1];
   for (i = 1; i <=dias_mes; i++){
        if (faturamento_dia[i]>maior)
            maior = faturamento_dia[i];
    }
    // Calculo da media mensal
    media=faturamento_mes/(double)cont;
    for (i = 1; i <=dias_mes; i++){
       if(faturamento_dia[i]>media)
        cont1++;
    }

    printf("menor valor de faturamento ocorrido em um dia do mês %.2lf\n",menor);
    printf("maior valor de faturamento ocorrido em um dia do mês %.2lf\n",maior);
    printf("Número de dias no mês em que o valor de faturamento diário foi superior à média mensal %d\n",cont1);

    return 0;
}
