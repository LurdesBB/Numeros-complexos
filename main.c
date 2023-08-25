#include <stdio.h>
#include "complexo.h"

int main(){
    complexo a, b, c;
    a = complexo_le();
    b = complexo_le();
    c = complexo_soma(a,b);
    complexo_imprime(c);
    complexo_verifica(a);
    complexo_verifica(b);
    return 0;
}