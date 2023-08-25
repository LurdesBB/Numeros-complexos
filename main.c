#include <stdio.h>
#include "complexo.h"

int main(){
    int i=0;
    complexo a, b, c;
    a = complexo_le();
    b = complexo_le();
    c = complexo_soma(a,b);
    complexo_imprime(c);
    complexo_verifica(a,&i);
    complexo_verifica(b,&i);
    complexo_verifica(c,&i);
    return 0;
}
