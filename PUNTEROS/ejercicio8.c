#include <stdio.h>

int atoi(char *s)
{
    int numero=0;
    while(*s!='\0'&&*s>='0'&&*s<='9')
    {
        numero = numero*10+(*s-'0');
        s++;
    }
    return numero;
}

int main()
{
    char l[40]="3768987";
    printf("%d", atoi(l));
}
