#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char reverse[100],copia[100];
    int a,b;
    gets(reverse);
    b=strlen(reverse)-1;
    for(a=0;reverse[a]!='\0';a++){
    copia[b]=reverse[a];
    b--;
    }
    copia[a]='\0';
    strcpy(reverse,copia);
    printf("%s\n",reverse);
return 0;
}


//5) Escreva um programa que inverta os caracteres de um string.

//IMPORTANTE:
// a) Essa string pode ser informada atrav�s de qualquer entrada de sua prefer�ncia ou pode ser previamente definida no c�digo;
// b) Evite usar fun��es prontas, como, por exemplo, reverse;
