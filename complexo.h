typedef struct{
    float real;
    float imaginario;
}complexo;

int i=0;

complexo complexo_novo(float real, float imaginario);
complexo complexo_soma(complexo a, complexo b);
complexo complexo_le();
complexo complexo_imprime(complexo a);
complexo complexo_verifica(complexo a,int *i);
