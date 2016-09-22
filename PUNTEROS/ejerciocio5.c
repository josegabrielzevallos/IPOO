#include <stdio.h>

void strncat2(char *m, char*n, int l)
{
    while (*m != '\0') /* encuentra el fin de s */
        m++;

    while(l!=0)
    {
        if(*n!='\0')
            *m=*n;
        else
            *m='\0';
            l--;
        n++;
        m++;
    }


}
int main()
{
    char x[10]="hola",y[10]="mundo";
    int p=5;
    strncat2(x,y,p);
    printf("%s",x);
}
