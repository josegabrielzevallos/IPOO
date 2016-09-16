#include <stdio.h>

char lower()
{
    int c;
    while((c=getchar())!= '\0')
    (c>='A'&&c<='Z')?printf("%c",c+32):printf("%c",c);
}
int main()
{
    lower();

    return 0;
}
