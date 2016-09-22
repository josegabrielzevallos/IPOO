#include <stdio.h>
void strcpy(char *m, char *n, int l)
{
    while(l!=0)
    {
        if(*n!='\0')
            *m=*n;

        else
            *m=='\0';
        l--;
        m++;
        n++;
    }
    *(m++)='\0';
}

int main()
{
    char x[10]="hola",y[10]="mundo";
    int p=3;
    strcpy(x,y,p);
    printf("%s",x);

}
