#include <stdio.h>

int strend(char *p, char *t)
{
    int cont=0;
    while(*s!='\0')
        s++;
    while(*t!='\0')
    {
        t++;
        cont++;
    }
    while(cont!=0)
    {
        if(*s==*t)
        {
            cont--;
            s--;
            t--;
        }
        else
            return 0;
    }
    return 1;
}

int main()
{
    char s[15]="lunasol",p[15]="sol";
    strend(s,p);
}
