#include <stdio.h>
#include "complexo.c"

int main(){
    complexo a, b, c;
    a = complexo_le();
    b = complexo_le();
    printf("\nO resultado da soma eh: ");
    c = complexo_soma(a,b);
    complexo_imprime(c);
    complexo_verifica(a);
    complexo_verifica(b);
    printf("\nA soma:");
    complexo_verifica(c);
    return 0;
}
