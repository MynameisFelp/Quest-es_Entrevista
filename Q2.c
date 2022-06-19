#include <stdio.h>
int main(){
    int N,t1,t2,t3,cont=0,cont1=0;
    scanf("%d",&N);
    t1=0;
    t2=1;
    cont=cont+2;
    if(N==t1 || N==t2){
        cont1++;
    }
    while(cont<=N)
        {
        t3=t1+t2;
        t1=t2;
        t2=t3;
        cont++;
      if(N==t3){
        cont1++;
     }
    }
    if(cont1>0){
        printf("Pertece\n");
    }
    else{
        printf("Não pertence");
    }
return 0;
}
