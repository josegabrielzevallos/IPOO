
#include <stdio.h>
int getline(char *s, int *lim)
{
    int c,cont=0,i;

    for (i = 0; i<*lim-1 && (c = getchar( )) !=EOF && c!='\n'; ++i)
    {
        *s = c;
        s++;
        cont++;
    }
    if (c == '\n')
    {
        *s = c;
        s++;
        cont++;
    }
    return cont;
}
void copy(char *to, char *from)
{

    while ((*to = *from) != '\0')
    {
        to++;
        from++;
    }
}

int main( )
{
    int MAXLINE =1000;
    int len; /* longitud actual de la línea */
    int max; /* máxima longitud vista hasta el momento */
    char line[MAXLINE]; /* línea de entrada actual */
    char longest[MAXLINE]; /* la línea más larga se guarda aquí */

    max = 0;
    while ((len = getline(line, &MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    if (max >0)
        printf("%s", longest);
    return 0;
}


