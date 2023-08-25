#include <stdio.h>
#include <math.h>
#include "complexo.h"

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

complexo complexo_imprime(complexo a){
    printf("%f + %fi\n",a.real,a.imaginario);
}

complexo complexo_verifica(complexo a, int *i){
    if(a.real!=0 && a.imaginario==0){
        printf("\nO numero com parte real %f e imaginaria %f eh real!",a.real,a.imaginario);
    }else{
        printf("\nO numero com parte real %f e imaginaria %f nao eh real!",a.real,a.imaginario);
    }
    if(i==3){
        if(a.real!=0 && a.imaginario==0){
        printf("\nA soma dos dois numeros eh real!");
        }else{
        printf("\nA soma dos dois numeros nao eh real!");
        }
    }
    i++;
}
