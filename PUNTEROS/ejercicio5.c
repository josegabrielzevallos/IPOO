#include<stdio.h>

int strncmp2(char *m, char *n, int l)
{
    int cont=0;
    while (*m != '\0') /* encuentra el fin de s */
    {
        m++;
        cont++;//tamaño de m
    }
    if(cont > l)
        cont=l;

    while (*n != '\0') /* encuentra el fin de s */
    {
        n++;
        cont--;//tamaño de m
    }
    return cont;

}
int main()
{
    char x[50]="holamundo",y[50]="h";
    int p=3;
    printf("Resultado: %d",strncmp2(x,y,p));
}
