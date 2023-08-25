#include <stdio.h>
#include <math.h>
/*#include "complexo.h"*/

typedef struct{
    float real;
    float imaginario;
}complexo;

complexo complexo_novo(float real, float imaginario){
    complexo c;
    c.real = real;
    c.imaginario = imaginario;
    return c;
}

complexo complexo_soma(complexo a, complexo b){
    return complexo_novo(a.real + b.real, a.imaginario + b.imaginario);
}

complexo complexo_le(){
    complexo a;
    printf("\nDigite primeiramente a parte real e depois a parte imaginaria: ");
    scanf("%f %f",&a.real,&a.imaginario);
    return a;
}

void complexo_imprime(complexo a){
    printf("%.2f + %.2fi\n",a.real,a.imaginario);
}

void complexo_verifica(complexo a){
    if(a.real!=0 && a.imaginario==0){
        printf("\nO numero com parte real %.2f e imaginaria %.2f eh real!",a.real,a.imaginario);
    }else{
        printf("\nO numero com parte real %.2f e imaginaria %.2f nao eh real!",a.real,a.imaginario);
    }
}
