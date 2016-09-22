#include <stdio.h>

void strcat(char *m, char *n)
{
    int i=0;
    while (*m != '\0') /* encuentra el fin de s */
        m++;
    while (( *m=*n) != '\0')/* copia t */
    {
        m++;
        n++;
    }
}

int main()
{
    char x[10]="hola.",y[10]="mundo";
    strcat(x,y);

    int i;
    printf("%s",x);

}
